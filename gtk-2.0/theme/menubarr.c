style"menubar"{
xthickness=0
ythickness=0
GtkMenuBar::shadow-type=GTK_SHADOW_NONE
GtkMenuBar::internal-padding=1
GtkMenuBar::button-relief=GTK_RELIEF_NONE
GtkMenuBar::space-style=GTK_TOOLBAR_SPACE_EMPTY
GtkMenuBar::space-size=3}
class"GtkMenuBar"style"menubar"

style"menubaritem"{
fg[PRELIGHT]=@selected_bg_color
bg[SELECTED]=shade (0.5, @bg_color)
bg[PRELIGHT]=shade (0.5, @bg_color)
bg[ACTIVE]=shade (0.5, @bg_color)}
widget_class"*GtkMenuBar*"style"menubaritem"
