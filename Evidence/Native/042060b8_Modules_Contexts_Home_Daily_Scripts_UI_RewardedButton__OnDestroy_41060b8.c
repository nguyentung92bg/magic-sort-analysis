/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.RewardedButton$$OnDestroy
void Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__OnDestroy (Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.RewardedButton$$OnDestroy
   void Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__OnDestroy
   (Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__OnDestroy_41060b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c3ab9f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05808938);
    FUN_012d0dc8(PTR_DAT_057607c8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c3ab9f = 1;
  }
  puVar3 = PTR_DAT_0578b048;
  puVar1 = PTR_DAT_057607c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar8 != 0) &&
     (System_Action___ctor_21239bc(lVar8,param_1,*(undefined8 *)PTR_DAT_05808938,0), lVar7 != 0)) {
    if ((bRam0000000005c3aa35 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048,lVar8,0);
      bRam0000000005c3aa35 = 1;
    }
    puVar2 = PTR_DAT_0578b048;
    lVar9 = *(long *)(lVar7 + 0x20);
    while ((plVar5 = (long *)System_Delegate__Remove_23e3b70(lVar9,lVar8,0), plVar5 == (long *)0x0
           || (*plVar5 == *(long *)puVar2))) {
      lVar6 = FUN_01351224((long *)(lVar7 + 0x20),plVar5,lVar9);
      bVar4 = lVar9 == lVar6;
      lVar9 = lVar6;
      if (bVar4) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

