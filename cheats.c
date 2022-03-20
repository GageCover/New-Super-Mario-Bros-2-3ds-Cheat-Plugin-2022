void	~#ZeroOneZeroOneAZero~Gage_C_New_Super_Mario_Bros_Two_Plugin(void)
{
	offset = 0;
	data = 0;
}

void	__Level_Up_Codes__(void)
{
}

void	Golden_Mario(void)
{
	offset = 0x00000000;
	if (READU32(offset + 0x05E61E8) != 0x00000000)
	{
		offset = READU32(offset + 0x05E61E8);
		if (READU32(offset + 0x0000364) < 0x14000000)
		{
			offset = READU32(offset + 0x0000364);
			WRITEU8(offset + 0x0000015, 0x00000006);
			offset = 0;
			data = 0;
		}
	}
}

void	Gold_Raccoon_Mario(void)
{
	if (is_pressed(0x00000280))
	{
		offset = 0x00000000;
		if (READU32(offset + 0x05E61E8) != 0x00000000)
		{
			offset = READU32(offset + 0x05E61E8);
			if (READU32(offset + 0x0000364) < 0x14000000)
			{
				offset = READU32(offset + 0x0000364);
				WRITEU8(offset + 0x0000015, 0x00000007);
				offset = 0;
				data = 0;
			}
		}
	}
}

void	Raccoon_Mario(void)
{
	offset = 0x14000000;
	WRITEU32(offset + 0x0162AD5, 0x00000004);
}

void	Fire_Mario(void)
{
	offset = 0x00000000;
	if (READU32(offset + 0x05E61E8) != 0x00000000)
	{
		offset = READU32(offset + 0x05E61E8);
		if (READU32(offset + 0x0000364) < 0x14000000)
		{
			offset = READU32(offset + 0x0000364);
			WRITEU8(offset + 0x0000015, 0x00000002);
			offset = 0;
			data = 0;
		}
	}
}

void	Small_Mario(void)
{
	offset = 0x00000000;
	if (READU32(offset + 0x05E61E8) != 0x00000000)
	{
		offset = READU32(offset + 0x05E61E8);
		if (READU32(offset + 0x0000364) < 0x14000000)
		{
			offset = READU32(offset + 0x0000364);
			WRITEU8(offset + 0x0000015, 0x00000000);
			offset = 0;
			data = 0;
		}
	}
}

void	Tiny_Mario(void)
{
	offset = 0x00000000;
	if (READU32(offset + 0x05E61E8) != 0x00000000)
	{
		offset = READU32(offset + 0x05E61E8);
		if (READU32(offset + 0x0000364) < 0x14000000)
		{
			offset = READU32(offset + 0x0000364);
			WRITEU8(offset + 0x0000015, 0x00000003);
			offset = 0;
			data = 0;
		}
	}
}

void	__(void)
{
}

void	Invincibility(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x01F6F78, 0xE3500001);
	offset = 0;
	data = 0;
}

void	Fly(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x05694C0, 0xE2841A01);
	WRITEU32(offset + 0x05694C4, 0xE28110E0);
	WRITEU32(offset + 0x05694C8, 0xE591100C);
	WRITEU32(offset + 0x05694CC, 0xE2111001);
	WRITEU32(offset + 0x05694D0, 0x159F100C);
	WRITEU32(offset + 0x05694D4, 0x15801010);
	WRITEU32(offset + 0x05694D8, 0xE1A01000);
	WRITEU32(offset + 0x05694DC, 0xE1A00000);
	WRITEU32(offset + 0x05694E0, 0xE12FFF1E);
	WRITEU32(offset + 0x05694E4, 0x40500000);
	WRITEU32(offset + 0x01F63E0, 0xEB0DCC36);
	offset = 0;
	data = 0;
}

void	Max_Lifes_Hack(void)
{
	offset = 0x16000000;
	WRITEU32(offset + 0x07672B8, 0x0000270F);
	offset = 0;
	data = 0;
}

void	Score_Hack(void)
{
	offset = 0x14000000;
	WRITEU32(offset + 0x015E470, 0x3B9AC9FF);
	offset = 0;
	data = 0;
	offset = 0x15000000;
	WRITEU32(offset + 0x0B767FC, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	Coin_Hack(void)
{
	offset = 0x15000000;
	WRITEU32(offset + 0x0B7BAA4, 0x0098967F);
	WRITEU32(offset + 0x0B7BAAC, 0x0098967F);
	WRITEU32(offset + 0x07573BC, 0x0098967F);
	offset = 0;
	data = 0;
}

void	Time_Always_FiveZeroZero(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x048F75C, 0x000001F4);
	WRITEU32(offset + 0x0B76108, 0x000001F4);
	WRITEU32(offset + 0x0224474, 0xE1A00000);
	offset = 0;
	data = 0;
}

void	Shoot_Golden_Fireballs(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x026C4BC, 0xE1A00000);
	WRITEU32(offset + 0x0268C54, 0xEA00000A);
	WRITEU32(offset + 0x0268D50, 0xE1A00000);
	WRITEU32(offset + 0x02676B8, 0xE1A00000);
	WRITEU32(offset + 0x02676C0, 0xE1A00000);
	WRITEU32(offset + 0x0267720, 0xEA000042);
	WRITEU32(offset + 0x03AB864, 0xEA000007);
	offset = 0;
	data = 0;
}

void	Rapid_Fireballs(void)
{
	offset = 0x00000000;
	WRITEU8(offset + 0x02E9110, 0x00000000);
	WRITEU8(offset + 0x02E9130, 0x00000000);
	offset = 0;
	data = 0;
}

void	Coin_Hack__Coin_Rush_(void)
{
	offset = 0x15000000;
	WRITEU32(offset + 0x0B75AEC, 0x0000270F);
	WRITEU32(offset + 0x0B75AF4, 0x0000270F);
	WRITEU32(offset + 0x0B75B7C, 0x0000270F);
	offset = 0;
	data = 0;
	offset = 0x16000000;
	WRITEU32(offset + 0x0757F8C, 0x0000270F);
	offset = 0;
	data = 0;
}
