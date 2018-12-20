class CfgGroups
{
	class EAST
	{
		class CFP_O_IS
		{
			name = "Islamic State";
			class Infantry
			{
				name = "Infantry";
				class cfp_o_grp_is_sentry
				{
					name = "Sentry";
					side = 0;
					faction = "CFP_O_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_militaman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_is_inf_squad
				{
					name = "Infantry Squad";
					side = 0;
					faction = "CFP_O_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_squad_leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_grenadier";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "cfp_o_is_autorifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "cfp_o_is_machinegunner";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "cfp_o_is_sniper";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "cfp_o_is_at";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "cfp_o_is_rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "cfp_o_is_rifleman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "cfp_o_is_rifleman";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class cfp_o_grp_is_wpn_squad
				{
					name = "Weapons Squad";
					side = 0;
					faction = "CFP_O_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_squad_leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_grenadier";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "cfp_o_is_autorifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "cfp_o_is_medic";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "cfp_o_is_sniper";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "cfp_o_is_at";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "cfp_o_is_sapper";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class cfp_o_grp_is_inf_fire_team
				{
					name = "Fire Team";
					side = 0;
					faction = "CFP_O_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_squad_leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_machinegunner";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "cfp_o_is_sniper";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "cfp_o_is_rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class cfp_o_grp_is_at_team
				{
					name = "Anti-Armor Team";
					side = 0;
					faction = "CFP_O_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_squad_leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_at";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_at";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "cfp_o_is_machinegunner";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "cfp_o_is_rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class cfp_o_grp_is_hq_squad
				{
					name = "HQ Squad";
					side = 0;
					faction = "CFP_O_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_team_leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_squad_leader";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_grenadier";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "cfp_o_is_machinegunner";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "cfp_o_is_medic";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "cfp_o_is_sniper";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "cfp_o_is_at";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "cfp_o_is_rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};

				class cfp_o_is_infantry_dshkm_team {
                    name = "DShKM Team";
                    side = 2;
                    faction = "CFP_I_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman_dshkm";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_Asst_Gunner_DSHKM";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman";
                    };
                };

                class cfp_o_is_infantry_kord_team {
                    name = "KORD Team";
                    side = 2;
                    faction = "CFP_I_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman_kord";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_Asst_Gunner_KORD";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman";
                    };
                };

                class cfp_o_is_infantry_mortar_team {
                    name = "Mortar Team";
                    side = 2;
                    faction = "CFP_I_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman_podnos";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_Asst_Gunner_Podnos";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman_podnos";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_Asst_Gunner_Podnos";
                    };
                };

                class cfp_o_is_infantry_metis_at_team {
                    name = "METIS AT Team";
                    side = 2;
                    faction = "CFP_I_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman_metis";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_Asst_Gunner_METIS";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman";
                    };
                };

                class cfp_o_is_infantry_spg_9team {
                    name = "SPG-9 Team";
                    side = 2;
                    faction = "CFP_I_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman_spg9";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_Asst_Gunner_SPG";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "cfp_o_is_rifleman";
                    };
                };

            };
			class Motorized
			{
				name = "Motorized";

				// Offroads

				class cfp_o_grp_is_offroad_mgs
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Offroad MGs";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_offroad_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_offroad_M2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_is_offroad_patrol
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Offroad Patrol";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_offroad_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_offroad";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};

				// Land Rover Groups

				class cfp_o_grp_is_lr_mgs
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS L.R. MGs";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_LR_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_LR_M2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_is_lr_light_support
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS L.R. Support";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_LR_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_LR_SPG9";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_is_lr_heavy_support
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS L.R. Heavy Support";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_LR_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_LR_SPG9";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_LR_SPG9";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				// UAZ Groups

				class cfp_o_grp_is_uaz_mgs
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS UAZ MGs";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_MG";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_is_uaz_light_support
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS UAZ Support";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_MG";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_AGS30";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_is_uaz_heavy_support
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS UAZ Heavy Support";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_MG";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_AGS30";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_SPG9";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				// mixed Technicals

				class cfp_o_grp_is_mixed_technicals_1
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Mixed Technicals 1";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_LR_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_pickup_PK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class cfp_o_grp_is_mixed_technicals_2
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Mixed Technicals 2";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_LR_SPG9";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_AGS30";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_pickup_PK";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class cfp_o_grp_is_mixed_technicals_3
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Mixed Technicals 3";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_MG";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_METIS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_pickup_PK";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class cfp_o_grp_is_mixed_technicals_4
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Mixed Technicals 4";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_LR_SPG9";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_METIS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_pickup_PK";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class cfp_o_grp_is_mixed_technicals_5
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Mixed Technicals 5";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_pickup_PK";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_SPG9";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_UAZ_METIS";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

			};
			class Mechanized
			{
				name = "Mechanized";

				class cfp_o_grp_is_bmp1
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_is_bmp1_section
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1 Section";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};

				};
				class cfp_o_grp_is_bmp1_platoon
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1 Platoon";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};
				class cfp_o_grp_is_bmp1p
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1P";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_is_bmp1p_section
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1P Section";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};

				};
				class cfp_o_grp_is_bmp1p_platoon
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1P Platoon";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1P";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};
				class cfp_o_grp_is_bmp2
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-2";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_is_bmp2_section
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-2 Section";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_BMP2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};

				};
				class cfp_o_grp_is_bmp2_platoon
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-2 Platoon";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_BMP2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_BMP2";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};
				class cfp_o_grp_is_bmps_mixed_1
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMPs Mixed 1";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_is_bmps_mixed_2
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMPs Mixed 2";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_is_bmps_mixed_3
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMPs Mixed 3";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_BMP1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};

			};
			class Armored
			{
				name = "Armored";
				class cfp_o_grp_is_t55
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-55";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_is_t55_section
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-55 Section";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_is_t55_platoon
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-55 Platoon";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_T55";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class cfp_o_grp_is_t72
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-72";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_is_t72_section
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-72 Section";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_T72";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_is_t72_platoon
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-72 Platoon";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_T72";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_T72";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class cfp_o_grp_is_mixed_armor_1
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS Mixed Armor 1";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};

				class cfp_o_grp_is_mixed_armor_2
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS Mixed Armor 2";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_BMP2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};

				class cfp_o_grp_is_mixed_armor_3
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS Mixed Armor 3";
					side = 0;
					faction = "CFP_O_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_is_BMP2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_is_T55";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

			};
		};
	};
};