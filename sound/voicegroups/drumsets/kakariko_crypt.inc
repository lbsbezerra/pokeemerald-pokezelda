	.align 2
voicegroup_kakariko_crypt_drumset::
	@ Index 0: Kick Drum
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88pro_rnd_kick, 255, 0, 255, 242
	@ Index 1: Snare Drum
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88pro_rnd_snare, 255, 0, 255, 242
	@ Index 2: Closed Hi-Hat
	voice_directsound_no_resample 60, 79, DirectSoundWaveData_unknown_close_hihat, 255, 242, 141, 0
	@ Index 3: Low Tom
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 242
	@ Index 4: Open Hi-Hat
	voice_directsound_no_resample 60, 79, DirectSoundWaveData_unknown_open_hihat, 255, 242, 141, 0
	@ Index 5: Crash Cymbal
	voice_directsound_no_resample 60, 79, DirectSoundWaveData_trinity_cymbal_crash, 255, 242, 141, 0
	.align 2
KeySplitTable_kakariko_crypt:
	.set Note, 0
	.rept 128
		.if Note == 36     @ Cn1 -> Kick Drum (Index 0)
			.byte 0
		.elseif Note == 38 @ Dn1 -> Snare Drum (Index 1)
			.byte 1
		.elseif Note == 42 @ Fs1 -> Closed Hi-Hat (Index 2)
			.byte 2
		.elseif Note == 43 @ Gn1 -> Low Tom (Index 3)
			.byte 3
		.elseif Note == 46 @ As1 -> Open Hi-Hat (Index 4)
			.byte 4
		.elseif Note == 47 @ Bn1 -> Crash Cymbal (Index 5)
			.byte 5
		.elseif Note == 51 @ Ds2 -> Mid Tom (Index 3)
			.byte 3
		.elseif Note == 57 @ An2 -> Secondary Crash (Index 5)
			.byte 5
		.else
			.byte 0        @ Default fallback
		.endif
		.set Note, Note + 1
	.endr
