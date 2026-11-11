/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.LeaderboardElementNameView$$SetName
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_LeaderboardElementNameView__SetName (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_LeaderboardElementNameView_o* __this, System_String_o* nickName, bool isMe, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.LeaderboardElementNameView$$SetName
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_LeaderboardElementNameView__SetName
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_LeaderboardElementNameView_o* __this,
   System_String_o* nickName, bool isMe, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_LeaderboardElementNameView__SetName_32dbbf0
               (long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000005c31d82 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c31d82 = 1;
  }
  if ((param_3 & 1) == 0) {
    plVar1 = *(long **)(param_1 + 0x18);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033dbce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x558))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x560));
      return;
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 8);
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) &&
       (plVar1 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                   (lVar4,*(undefined8 *)PTR_DAT_057a1e60), plVar1 != (long *)0x0))
    {
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xe) * 0x10 + 0x138);
            goto LAB_033dbcfc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0131971c(plVar1,*(long *)PTR_DAT_057636d0,0xe);
LAB_033dbcfc:
      lVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      if ((lVar4 != 0) && (plVar1 = *(long **)(param_1 + 0x18), plVar1 != (long *)0x0)) {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(lVar4 + 0x10);
        }
        TMPro_TMP_Text__PopulateTextBackingArray_3dc04a0(plVar1,lVar4,0,uVar3);
        plVar1[0x1a] = lVar4;
        FUN_012d0d74(plVar1 + 0x1a,lVar4);
        *(undefined4 *)(plVar1 + 0x7f) = 3;
        TMPro_TMP_Text__PopulateTextProcessingArray_3dbfa30(plVar1);
        *(undefined1 *)(plVar1 + 0x6d) = 1;
        (**(code **)(*plVar1 + 0x2f8))(plVar1,*(undefined8 *)(*plVar1 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x03ec1b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x2e8))(plVar1,*(undefined8 *)(*plVar1 + 0x2f0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

