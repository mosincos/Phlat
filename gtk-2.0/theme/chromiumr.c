style"chromium"{
xthickness=0
ythickness=0
ChromeGtkFrame::frame-color=shade(0.7,@bg_color)
ChromeGtkFrame::inactive-frame-color=shade(0.7,@bg_color)
ChromeGtkFrame::frame-gradient-size=0
ChromeGtkFrame::frame-gradient-color=@bg_color
ChromeGtkFrame::scrollbar-trough-color=@bg_color
ChromeGtkFrame::scrollbar-slider-prelight-color=@selected_bg_color
ChromeGtkFrame::scrollbar-slider-normal-color=@bg_color}
class"ChromeGtkFrame"style"chromium"

style "chromeentry" {
base[NORMAL]=shade(1.1,@base_color)
base[INSENSITIVE]=shade(1.1,@base_color)}
widget_class "*Chrom*<GtkEntry>"style"chromeentry"
