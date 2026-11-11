/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$InitializeRewardPool
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__InitializeRewardPool (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$InitializeRewardPool
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__InitializeRewardPool
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__InitializeRewardPool_38d3ea8
               (long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c34ba8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_0576ecf8);
    FUN_012d0dc8(PTR_DAT_057bdd58);
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c34ba8 = 1;
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x18);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x38) != 0)) {
      return;
    }
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05781050);
    if ((lVar1 != 0) &&
       (System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar1,*(undefined8 *)PTR_DAT_057994c8), lVar3 != 0)) {
      *(long *)(lVar3 + 0x38) = lVar1;
      FUN_012d0d74((long *)(lVar3 + 0x38),lVar1);
      if (*(long *)(lVar2 + 0x10) != 0) {
        lVar1 = *(long *)(*(long *)(lVar2 + 0x10) + 0x18);
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057bdd58);
        if ((lVar3 != 0) &&
           (System_Collections_Generic_List_object____ctor_21fc1fc
                      (lVar3,*(undefined8 *)PTR_DAT_0576ecf8), lVar1 != 0)) {
          plVar4 = (long *)(lVar1 + 0x40);
          *plVar4 = lVar3;
          FUN_012d0d74(plVar4,lVar3);
          *(undefined2 *)(lVar2 + 0x20) = 0x101;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

