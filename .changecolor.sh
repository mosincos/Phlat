#!/bin/sh
if [ ! -t 0 ]; then
	x-terminal-emulator -e "$0"
	exit 0
fi
basedir="$(dirname "$(readlink -f "${0}")")"
cd "$basedir"
if [ ! -f "$basedir"/.changecolor.sh ]; then
	exit 1
fi
color="$1"
case $color in
	-c|--color)
	newcolor="$2";;
esac
###things we need here
type sed >/dev/null 2>&1 &&
type tr >/dev/null 2>&1 &&
type find >/dev/null 2>&1||_missingdep=true
case $_missingdep in
	true)
		printf "You either miss sed, tr, or find! Aborting!\n"
		exit 1;;
esac
###set the color
if [ -z ${newcolor+x} ]; then 
	if type yad >/dev/null 2>&1; then
		newcolor=$(yad --color --init-color=#5288d1 --title="Please select a new #RRGGBB hilight color")
	elif type qarma >/dev/null 2>&1; then
		newcolor=$(qarma --color-selection --color=#5288d1 --title="Please select a new #RRGGBB hilight color")
	else
		read -p "Please enter your new hilight color in #RRGGBB(The '#' is a must!, #5288d1 is currently set): " newcolor
	fi
fi
if [ -z ${newcolor+x} ]; then
	printf "no color was was selected, aborting!"
	exit 1
fi
###recolor the xfwm/ui themes
_folders="images gtk-3.0 gtk-2.0 xfwm4 xfdashboard-1.0"
for _folder in $_folders; do
	cd $_folder
	find "$basedir/$_folder" -type f -exec sed -i 's/#5288d1/'$newcolor'/g' {} \;
	cd $basedir
done
sed -i 's/#5288d1/'$newcolor'/g' .changecolor.sh
printf "\n\ndone\n\n"
