/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$InitializeRewardPoolV2
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__InitializeRewardPoolV2 (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$InitializeRewardPoolV2
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__InitializeRewardPoolV2
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__InitializeRewardPoolV2_38d06fc
               (long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if ((bRam0000000005c34ba8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_0576ecf8);
    FUN_012d0dc8(PTR_DAT_057bdd58);
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c34ba8 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x38) != 0)) {
      return;
    }
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05781050);
    if ((lVar1 != 0) &&
       (System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar1,*(undefined8 *)PTR_DAT_057994c8), lVar2 != 0)) {
      *(long *)(lVar2 + 0x38) = lVar1;
      FUN_012d0d74((long *)(lVar2 + 0x38),lVar1);
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057bdd58);
        if ((lVar2 != 0) &&
           (System_Collections_Generic_List_object____ctor_21fc1fc
                      (lVar2,*(undefined8 *)PTR_DAT_0576ecf8), lVar1 != 0)) {
          plVar3 = (long *)(lVar1 + 0x40);
          *plVar3 = lVar2;
          FUN_012d0d74(plVar3,lVar2);
          *(undefined2 *)(param_1 + 0x20) = 0x101;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

