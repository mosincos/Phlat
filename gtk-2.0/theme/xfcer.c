style"xfceheaders"{
xthickness=1
ythickness=1
fg[NORMAL]=@fg_color
fg[PRELIGHT]=@fg_color
fg[SELECTED]=@fg_color
fg[ACTIVE]=@fg_color
fg[INSENSITIVE]=@fg_color
bg[NORMAL]=@base_color
bg[PRELIGHT]=@bg_color
bg[SELECTED]=@bg_color
bg[ACTIVE]=@bg_color
bg[INSENSITIVE]=@bg_color
base[NORMAL]=shade(0.9, @bg_color)
base[PRELIGHT]=shade(0.9, @bg_color)
base[ACTIVE]=shade(0.9, @bg_color)
base[SELECTED]=shade(0.9, @bg_color)
base[INSENSITIVE]=shade(0.9, @bg_color)
text[NORMAL]=@fg_color
text[PRELIGHT]=@fg_color
text[ACTIVE]=@fg_color
text[SELECTED]=@fg_color
text[INSENSITIVE]=@fg_color}
widget"*XfceHeading*"style"xfceheaders"

style"xfdesktop"{
font_name="bold"
XfdesktopIconView::shadow-blur-radius=2
XfdesktopIconView::label-alpha=0
XfdesktopIconView::selected-label-alpha=255
XfdesktopIconView::ellipsize-icon-labels=1
XfdesktopIconView::shadow-x-offset=0
XfdesktopIconView::shadow-y-offset=1
XfdesktopIconView::selected-shadow-x-offset=0
XfdesktopIconView::selected-shadow-y-offset=0
XfdesktopIconView::tooltip_size=48
XfdesktopIconView::cell-spacing=0
XfdesktopIconView::cell-padding=0
XfdesktopIconView::cell-text-width-proportion=3
XfdesktopIconView::shadow-color=@base_color
XfdesktopIconView::selected-shadow-color=@selected_base_color
fg[NORMAL]=@text_color
fg[SELECTED]=@selected_text_color
fg[ACTIVE]=@selected_text_color
base[ACTIVE]=@selected_base_color}
class"XfdesktopIconView"style"xfdesktop"

style "exoicons"{
xthickness=0
ythickness=0
GtkWidget::focus_padding=4
fg[NORMAL]=@selected_base_color
text[SELECTED]=@text_color}
widget_class "*ExoIconView*"style "exoicons"
widget_class "*ThunarIconView*ExoIconView"style "exoicons"

style "xfcenotifyd"{
XfceNotifyWindow::summary-bold=1
XfceNotifyWindow::border-color=shade(0.4, @bg_color)
XfceNotifyWindow::border-color-hover=shade(0.4, @bg_color)
XfceNotifyWindow::border-radius=0.0
XfceNotifyWindow::border-width=1
XfceNotifyWindow::border-width-hover=1
bg[NORMAL]=shade(0.6, @bg_color)}
class "XfceNotifyWindow" style "xfcenotifyd"

style"alttab"{
xthickness=0
ythickness=0
bg[NORMAL]=shade (0.6,@base_color)
bg[PRELIGHT]=shade (1.1,@base_color)
bg[SELECTED]=@selected_base_color
bg[ACTIVE]=@selected_base_color
font_name="bold"}
widget_class"*Xfwm4TabwinWidget*"style"alttab"
widget_class"*ThunarLocationButtons*GtkButton"style"pathbarbutton"
widget_class"*ThunarLocationButtons*GtkToggleButton"style"pathbarbutton"

style"thunarpathbar"{
xthickness=0
ythickness=0}
widget_class"*ThunarLocationButtons"style"thunarpathbar"

style "xfcepanelsettings"{
### Panel
# Time in miliseconds before the panel will unhide on an enter event
XfcePanelWindow::popup-delay = 350
# Time in miliseconds before the panel will hide on a leave event
XfcePanelWindow::popdown-delay = 600
# Size of autohide window in pixels
XfcePanelWindow::autohide-size = 1
### Taskbar/window buttons
# The maximum length of a button before the label ellipsizes.
# When this value is set to -1 the button will expand to the
# entire available space.
XfceTasklist::max-button-length = -1
# Ellipsizing used in the task list and overflow menu labels.
XfceTasklist::ellipsize-mode = PANGO_ELLIPSIZE_END
# Maximum number of characters in the menu label before it will
# be ellipsized.
XfceTasklist::menu-max-width-chars = 24
# Lucency of minimized icons. Valid values are between 0 (completely
# hide the icon) and 100 (don't lighten the icon).
XfceTasklist::minimized-icon-lucency=0
### Taskmenu/window menu
# Ellipsizing used in the menu label.
XfceWindowMenuPlugin::ellipsize-mode = PANGO_ELLIPSIZE_END
# Maximum number of characters in the menu label before it will be ellipsized.
XfceWindowMenuPlugin::max-width-chars = 24
# Lucency of minimized icons. Valid values are between 0 (completely
# hide the icon) and 100 (don't lighten the icon).
XfceWindowMenuPlugin::minimized-icon-lucency = 50
# Fix the panel images to a default gtk icon size
XfcePanelImage::force-gtk-icon-sizes=0}
class "*" style "xfcepanelsettings"
widget "*" style "xfcepanelsettings"

style "xfcepanelwindow"{
xthickness=0
ythickness=0
GtkWidget::shadow-type=GTK_SHADOW_NONE
GtkButton::inner-border={0,0,0,0}
GtkButton::image-spacing=0
engine"pixmap"{
image{
function=BOX
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=HANDLE
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=SHADOW
shadow=OUT
file="../images/gtk-2.0/none.svg"
border={1,1,0,1}
stretch=TRUE}}}
widget_class "*XfcePanelWindow*PanelItemBar" style "xfcepanelwindow"

style "xfcepanelboldfont"{
font_name="bold"}
widget_class "*XfcePanelWindow*ClockPlugin*" style "xfcepanelboldfont"
widget_class "*XfceTasklist*" style "xfcepanelboldfont"
widget_class "*XfceApplicationsMenu*" style "xfcepanelboldfont"
widget "*whiskermenu-button*" style "xfcepanelboldfont"

style"panelbutton"{
xthickness=0
ythickness=0
GtkButton::shadow-type=GTK_SHADOW_NONE
GtkWidget::wide-separators=1
GtkWidget::separator-height=0
GtkWidget::separator-width=0
engine"pixmap"{
image{
function=BOX
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=NORMAL
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=SELECTED
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=ACTIVE
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
detail="buttondefault"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
detail="focus"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}}}
widget_class"*XfcePanelWindow*Button"style"panelbutton"
widget_class"*ActionsPlugin*"style"panelbutton"
widget"*XfceApplicationsMenu*"style"panelbutton"
widget "*whiskermenu-button*" style "panelbutton"
widget "*xfce-panel-toggle-button*" style "panelbutton"
widget "*xfce-panel-button*" style "panelbutton"

style"paneltask"{
xthickness=3
ythickness=3
GtkButton::shadow-type=GTK_SHADOW_NONE
GtkWidget::wide-separators=1
GtkWidget::separator-height=0
GtkWidget::separator-width=0
engine"pixmap"{
image{
function=BOX
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=NORMAL
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/panel-task_prelight.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/panel-task_prelight.svg"
stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=SELECTED
file="../images/gtk-2.0/selection-color.svg"
stretch=FALSE}
image{
function=BOX
state=ACTIVE
file="../images/gtk-2.0/selection-color.svg"
stretch=FALSE}
image{
detail="buttondefault"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
detail="focus"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}}}
widget_class "*XfceTasklist*" style "paneltask"

style"panelextra"{
xthickness=0
ythickness=0
GtkButton::shadow-type=GTK_SHADOW_NONE
GtkWidget::wide-separators=1
GtkWidget::separator-height=0
GtkWidget::separator-width=0
engine"pixmap"{
image{
function=BOX
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=NORMAL
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=SELECTED
file="../images/gtk-2.0/selection-color.svg"
stretch=FALSE}
image{
function=BOX
state=ACTIVE
file="../images/gtk-2.0/selection-color.svg"
stretch=FALSE}
image{
detail="buttondefault"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
detail="focus"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}}}
widget_class "*XfcePanelWindow*ClockPlugin*" style "panelextra"
widget_class "*XfceApplicationsMenu*" style "panelextra"
widget "*whiskermenu-button*" style "panelextra"

style"thunarnoborderfix"{
xthickness=0
ythickness=0}
widget"*ThunarShortcutsPane" style"thunarnoborderfix"

style "thunarshortcuts"{
xthickness=0
ythickness=0
engine"pixmap"{
image{
function=FLAT_BOX
file="../images/gtk-2.0/window-color.svg"
state=NORMAL
stretch=TRUE
border={0,1,0,0}}}}
widget_class "*ThunarShortcuts*"style "thunarshortcuts"
