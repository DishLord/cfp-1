class CfgGroups
{
	class INDEP
	{
		class CFP_I_IS
		{
			name = "Islamic State";
			class Infantry
			{
				name = "Infantry";
				class CFP_I_grp_is_sentry
				{
					name = "Sentry";
					side = 2;
					faction = "CFP_I_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_militaman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class CFP_I_grp_is_inf_squad
				{
					name = "Infantry Squad";
					side = 2;
					faction = "CFP_I_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_squad_leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_grenadier";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "CFP_I_is_autorifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "CFP_I_is_machinegunner";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "CFP_I_is_sniper";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "CFP_I_is_at";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "CFP_I_is_rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "CFP_I_is_rifleman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "CFP_I_is_rifleman";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class CFP_I_grp_is_wpn_squad
				{
					name = "Weapons Squad";
					side = 2;
					faction = "CFP_I_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_squad_leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_grenadier";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "CFP_I_is_autorifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "CFP_I_is_medic";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "CFP_I_is_sniper";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "CFP_I_is_at";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "CFP_I_is_sapper";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class CFP_I_grp_is_inf_fire_team
				{
					name = "Fire Team";
					side = 2;
					faction = "CFP_I_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_squad_leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_machinegunner";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "CFP_I_is_sniper";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "CFP_I_is_rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class CFP_I_grp_is_at_team
				{
					name = "Anti-Armor Team";
					side = 2;
					faction = "CFP_I_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_squad_leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_at";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_at";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "CFP_I_is_machinegunner";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "CFP_I_is_rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class CFP_I_grp_is_hq_squad
				{
					name = "HQ Squad";
					side = 2;
					faction = "CFP_I_IS";
					icon = "\A3\ui_f\data\map\markers\NATO\o_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_team_leader";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_squad_leader";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_grenadier";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "CFP_I_is_machinegunner";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "CFP_I_is_medic";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "CFP_I_is_sniper";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "CFP_I_is_at";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "CFP_I_is_rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized";

				// Offroads

				class CFP_I_grp_is_offroad_mgs
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Offroad MGs";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_offroad_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_offroad_M2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class CFP_I_grp_is_offroad_patrol
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Offroad Patrol";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_offroad_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_offroad";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};

				// Land Rover Groups

				class CFP_I_grp_is_lr_mgs
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS L.R. MGs";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_LR_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_LR_M2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class CFP_I_grp_is_lr_light_support
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS L.R. Support";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_LR_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_LR_SPG9";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class CFP_I_grp_is_lr_heavy_support
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS L.R. Heavy Support";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_LR_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_LR_SPG9";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_LR_SPG9";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				// UAZ Groups

				class CFP_I_grp_is_uaz_mgs
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS UAZ MGs";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_MG";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class CFP_I_grp_is_uaz_light_support
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS UAZ Support";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_MG";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_AGS30";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class CFP_I_grp_is_uaz_heavy_support
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS UAZ Heavy Support";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_MG";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_AGS30";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_SPG9";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				// mixed Technicals

				class CFP_I_grp_is_mixed_technicals_1
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Mixed Technicals 1";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_LR_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_pickup_PK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class CFP_I_grp_is_mixed_technicals_2
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Mixed Technicals 2";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_LR_SPG9";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_AGS30";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_pickup_PK";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class CFP_I_grp_is_mixed_technicals_3
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Mixed Technicals 3";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_MG";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_METIS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_pickup_PK";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class CFP_I_grp_is_mixed_technicals_4
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Mixed Technicals 4";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_LR_SPG9";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_METIS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_pickup_PK";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class CFP_I_grp_is_mixed_technicals_5
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "IS Mixed Technicals 5";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_pickup_PK";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_SPG9";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_UAZ_METIS";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

			};
			class Mechanized
			{
				name = "Mechanized";

				class CFP_I_grp_is_bmp1
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class CFP_I_grp_is_bmp1_section
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1 Section";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};

				};
				class CFP_I_grp_is_bmp1_platoon
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1 Platoon";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};
				class CFP_I_grp_is_bmp1p
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1P";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class CFP_I_grp_is_bmp1p_section
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1P Section";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};

				};
				class CFP_I_grp_is_bmp1p_platoon
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-1P Platoon";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1P";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};
				class CFP_I_grp_is_bmp2
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-2";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class CFP_I_grp_is_bmp2_section
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-2 Section";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_BMP2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};

				};
				class CFP_I_grp_is_bmp2_platoon
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMP-2 Platoon";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_BMP2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_BMP2";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};
				class CFP_I_grp_is_bmps_mixed_1
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMPs Mixed 1";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class CFP_I_grp_is_bmps_mixed_2
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMPs Mixed 2";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class CFP_I_grp_is_bmps_mixed_3
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "IS BMPs Mixed 3";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_BMP1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};

			};
			class Armored
			{
				name = "Armored";
				class CFP_I_grp_is_t55
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-55";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class CFP_I_grp_is_t55_section
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-55 Section";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class CFP_I_grp_is_t55_platoon
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-55 Platoon";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_T55";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class CFP_I_grp_is_t72
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-72";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class CFP_I_grp_is_t72_section
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-72 Section";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_T72";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class CFP_I_grp_is_t72_platoon
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS T-72 Platoon";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_T72";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_T72";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class CFP_I_grp_is_mixed_armor_1
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS Mixed Armor 1";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};

				class CFP_I_grp_is_mixed_armor_2
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS Mixed Armor 2";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_BMP2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};

				class CFP_I_grp_is_mixed_armor_3
				{
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "IS Mixed Armor 3";
					side = 2;
					faction = "CFP_I_IS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "CFP_I_is_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "CFP_I_is_BMP2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "CFP_I_is_T55";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

			};
		};
	};
};