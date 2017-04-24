style "scrollbar"{
bg[NORMAL]=@selected_bg_color
bg[PRELIGHT]=@selected_bg_color
bg[SELECTED]=@selected_bg_color
bg[ACTIVE]=shade (0.6, @bg_color)
bg[INSENSITIVE]=@base_color
xthickness=0
ythickness=0
GtkScrollbar::min-slider-length=40
GtkScrollbar::fixed-slider-length=1
GtkScrollbar::has_secondary_backward_stepper=0
GtkScrollbar::has_secondary_forward_stepper=0
GtkScrollbar::has_backward_stepper=1
GtkScrollbar::has_forward_stepper=1
GtkRange::activate-slider=0
GtkRange::slider-width=18
GtkRange::stepper-size=18
GtkRange::stepper-spacing=0
GtkRange::trough-border=0
GtkRange::trough-under-steppers=1}
class"GtkScrollbar"style"scrollbar"
