/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnView$$OnEnable
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__OnEnable (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnView$$OnEnable
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__OnEnable
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__OnEnable_16facfc
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c24ba7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057c35c8);
    FUN_012d0dc8(PTR_DAT_057bd0f8);
    FUN_012d0dc8(PTR_DAT_0575e7d8);
    FUN_012d0dc8(PTR_DAT_057bb5b0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c24ba7 = 1;
  }
  puVar1 = PTR_DAT_057bd0f8;
  puVar2 = PTR_DAT_0578b048;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_057c35c8;
  if (lVar6 != 0) {
    System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057c35c8,0);
    puVar1 = PTR_DAT_057bb5b0;
    if (lVar5 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 017fae18 to 018faed3 has its CatchHandler @ 017fae18
                       catch() { ... } // from try @ 017fae18 with catch @ 017fae18
                       catch() { ... } // from try @ 017faef0 with catch @ 017fae18
                       catch() { ... } // from try @ 017faf30 with catch @ 017fae18
                       catch() { ... } // from try @ 017faf68 with catch @ 017fae18 */
      if ((lVar6 != 0) &&
         (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)puVar3,0),
         puVar1 = PTR_DAT_0575e7d8, lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar6 != 0) &&
           (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)puVar3,0), lVar5 != 0)) {
          if ((bRam0000000005c3aa34 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0578b048,lVar6,0);
            bRam0000000005c3aa34 = 1;
          }
          puVar3 = PTR_DAT_0578b048;
          lVar9 = *(long *)(lVar5 + 0x20);
          while ((plVar7 = (long *)System_Delegate__Combine_23e3964(lVar9,lVar6,0),
                 plVar7 == (long *)0x0 || (*plVar7 == *(long *)puVar3))) {
            lVar8 = FUN_01351224((long *)(lVar5 + 0x20),plVar7,lVar9);
            bVar4 = lVar9 == lVar8;
            lVar9 = lVar8;
            if (bVar4) {
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(plVar7);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

