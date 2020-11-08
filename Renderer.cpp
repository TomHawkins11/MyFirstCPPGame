internal void 
clear_screen(u32 color) {
	u32* pixel = (u32*)render_state.memory;
	for (int i = 0; i < render_state.height; i++)
	{
		for (int j = 0; j < render_state.width; j++)
		{
			*pixel++ = color;
		}
	}
}


internal void 
draw_rect_in_pixels(int x0, int y0, int x1, int y1, u32 color) {
	x0 = clamp(0, x0, render_state.width);
	x1 = clamp(0, x1, render_state.width);
	y0 = clamp(0, y0, render_state.height);
	y1 = clamp(0, y1, render_state.height);

	for (int y = y0; y < y1; y++)
	{
		u32* pixel = (u32*)render_state.memory + x0 + y* render_state.width;
		for (int x = x0; x < x1; x++)
		{
			*pixel++ = color;
		}
	}
}

internal void
draw_rect(float x, float y, float half_size_x, float half_size_y, u32 color) {
	//change to pixels
	int x0 = x - half_size_x;
	int x1 = x - half_size_x;
	int x0 = x - half_size_x;
	int x0 = x - half_size_x;


	draw_rect_in_pixels(x0, y0, x1, y1, color)
}