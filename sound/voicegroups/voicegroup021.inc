	.align 2
voicegroup021::
	@ Instrument 0: Right Hand Melody (Trombone Keysplit)
	voice_keysplit voicegroup009, KeySplitTable5

	@ Instrument 1: Left Hand Accompaniment (Fingered Bass / Cello)
	voice_directsound 43, 0, DirectSoundWaveData_dp_org1_c4_16, 255, 0, 255, 196
