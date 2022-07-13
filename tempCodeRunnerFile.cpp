// void Swapper(unsigned char *state)
// {
// 	unsigned char tmp[16];

// 	/* Column 1 */
// 	tmp[0] = state[2];
// 	tmp[1] = state[6];
// 	tmp[2] = state[10];
// 	tmp[3] = state[14];

// 	/* Column 2 */
// 	tmp[4] = state[3];
// 	tmp[5] = state[7];
// 	tmp[6] = state[11];
// 	tmp[7] = state[15];

// 	/* Column 3 */
// 	tmp[8] = state[0];
// 	tmp[9] = state[4];
// 	tmp[10] = state[8];
// 	tmp[11] = state[12];

// 	/* Column 4 */
// 	tmp[12] = state[1];
// 	tmp[13] = state[5];
// 	tmp[14] = state[9];
// 	tmp[15] = state[13];

// 	for (int i = 0; i < 16; i++)
// 	{
// 		state[i] = tmp[i];
// 	}
// }
