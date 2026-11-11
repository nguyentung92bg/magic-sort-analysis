/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IncreaseProgressbarRewardScore
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseProgressbarRewardScore (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, int32_t scoreIncrement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IncreaseProgressbarRewardScore
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseProgressbarRewardScore
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, int32_t
   scoreIncrement, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseProgressbarRewardScore_411f540
               (long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_057ece38;
  puVar3 = PTR_DAT_057a2920;
  puVar2 = PTR_DAT_05783728;
  while( true ) {
    if ((bRam0000000005c3ac7a & 1) == 0) {
      FUN_012d0dc8(puVar2);
      FUN_012d0dc8(puVar3);
      bRam0000000005c3ac7a = 1;
    }
    if (((*(long *)(param_1 + 0x28) == 0) ||
        (lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar6 == 0)) ||
       (lVar5 = *(long *)(param_1 + 0x60), lVar5 == 0)) break;
    iVar1 = *(int *)(lVar6 + 0x20);
    if (*(int *)(lVar5 + 0x18) <= iVar1) {
      return;
    }
    lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar5,iVar1,*(undefined8 *)puVar3);
    lVar5 = *(long *)(param_1 + 0x28);
    if (((lVar5 == 0) || (lVar7 = *(long *)(lVar5 + 0x20), lVar7 == 0)) || (lVar6 == 0)) break;
    param_2 = *(int *)(lVar7 + 0x1c) + param_2;
    if (param_2 < *(int *)(lVar6 + 0x20)) {
      *(int *)(lVar7 + 0x1c) = param_2;
      *(undefined2 *)(lVar5 + 0x18) = 0x101;
      return;
    }
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(puVar4);
      cRam0000000005c230a8 = '\x01';
    }
    lVar5 = **(long **)(*(long *)puVar4 + 0xb8);
    if (lVar5 == 0) break;
    Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentProgressClaimStat_1451a60
              (lVar5,0);
    lVar5 = *(long *)(param_1 + 0x28);
    if ((lVar5 == 0) || (lVar7 = *(long *)(lVar5 + 0x20), lVar7 == 0)) break;
    *(undefined4 *)(lVar7 + 0x1c) = 0;
    *(int *)(lVar7 + 0x20) = iVar1 + 1;
    *(undefined2 *)(lVar5 + 0x18) = 0x101;
    param_2 = param_2 - *(int *)(lVar6 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

