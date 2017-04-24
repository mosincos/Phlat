style"menuitem"{
bg[PRELIGHT]=@selected_bg_color}
widget_class"*.<GtkMenu>.<GtkMenuItem>"style"menuitem"
style"menuitem"{
fg[PRELIGHT]=@selected_fg_color}
widget_class"*.<GtkMenu>.<GtkMenuItem>.<GtkLabel>"style"menuitem"

style"menuseperator"{
xthickness=0
ythickness=0
GtkSeparatorMenuItem::horizontal-padding=0
GtkMenuItem::toggle-spacing=0
GtkWidget::wide-separators=1
GtkMenuItem::separator-height=1
GtkMenu::shadow-type=GTK_SHADOW_NONE
engine"mist"{}}
widget_class"*<GtkSeparatorMenuItem>*"style"menuseperator"
