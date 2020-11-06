void render_background() {
	unsigned int* pixel = (unsigned int*)render_state.memory;
	for (int i = 0; i < render_state.height; i++)
	{
		for (int j = 0; j < render_state.width; j++)
		{
			*pixel++ = i * j;
		}
	}
}