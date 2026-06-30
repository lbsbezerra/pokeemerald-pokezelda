.align 2
kakariko_crypt::
	@ Use the standard engine macro pointing to a custom keysplit table
	voice_keysplit voicegroup_kakariko_crypt_drumset, KeySplitTable_kakariko_crypt
	.rept 16
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	@ Swapped: High-register church organ balanced for 3-note chords
	voice_directsound 60, 0, DirectSoundWaveData_dp_org1_c4_16, 155, 0, 155, 15
	voice_directsound 60, 0, DirectSoundWaveData_dp_org1_c4_16, 155, 0, 155, 15
	.rept 11
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	@ Indices 30 & 31: Gym Leader Trumpets (Keysplit)
	voice_keysplit voicegroup009, KeySplitTable5
	voice_keysplit voicegroup009, KeySplitTable5
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 255, 253, 0, 149
	.rept 47
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	@ Index 81: Route 110 Trumpet
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_trumpet_60, 255, 0, 255, 165
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 165
	.rept 38
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	.endr
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 0, 255, 127
