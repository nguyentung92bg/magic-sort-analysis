/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetLastProgressbarRatio
float Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLastProgressbarRatio (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetLastProgressbarRatio
   float 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLastProgressbarRatio
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

float Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLastProgressbarRatio_411fd1c
                (long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  if ((bRam0000000005c3ac83 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783728);
    FUN_012d0dc8(PTR_DAT_057a2920);
    bRam0000000005c3ac83 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if ((lVar3 != 0) && (lVar2 = *(long *)(param_1 + 0x60), lVar2 != 0)) {
    fVar4 = 0.0;
    if (*(int *)(lVar3 + 0x2c) < *(int *)(lVar2 + 0x18)) {
      iVar1 = *(int *)(lVar3 + 0x28);
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,*(int *)(lVar3 + 0x2c),*(undefined8 *)PTR_DAT_057a2920);
      if (lVar3 == 0) goto LAB_0421fdbc;
      if (*(int *)(lVar3 + 0x20) != 0) {
        fVar4 = (float)iVar1 / (float)*(int *)(lVar3 + 0x20);
      }
    }
    return fVar4;
  }
LAB_0421fdbc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

