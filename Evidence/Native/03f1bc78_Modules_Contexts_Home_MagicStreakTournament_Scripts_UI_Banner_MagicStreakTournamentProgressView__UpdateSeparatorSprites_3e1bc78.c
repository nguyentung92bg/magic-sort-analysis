/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$UpdateSeparatorSprites
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__UpdateSeparatorSprites (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$UpdateSeparatorSprites
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__UpdateSeparatorSprites
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__UpdateSeparatorSprites_3e1bc78
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000005c380ea & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    bRam0000000005c380ea = 1;
  }
  puVar2 = PTR_DAT_057fbae0;
  puVar1 = PTR_DAT_057936b8;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_68,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_0579f3e8);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  lStack_40 = lStack_58;
  while( true ) {
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_50,*(undefined8 *)puVar2);
    lVar3 = lStack_40;
    if ((uVar4 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_50,*(undefined8 *)puVar1);
      return;
    }
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar5 = UnityEngine_Component__get_transform_408b444(lStack_40,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    fVar6 = (float)UnityEngine_Transform__get_position_4092b08(lVar5,0);
    if (*(long *)(param_1 + 0x38) == 0) break;
    fVar7 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_1 + 0x38),0);
    lVar5 = *(long *)(param_1 + 0x20);
    if (fVar7 <= fVar6) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar3,*(undefined8 *)(lVar5 + 0x168),0);
    }
    else {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar3,*(undefined8 *)(lVar5 + 0x160),0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

