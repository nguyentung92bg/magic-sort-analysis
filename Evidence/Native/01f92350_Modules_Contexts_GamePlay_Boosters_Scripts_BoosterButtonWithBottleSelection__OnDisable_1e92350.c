/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterButtonWithBottleSelection$$OnDisable
void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButtonWithBottleSelection__OnDisable (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButtonWithBottleSelection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterButtonWithBottleSelection$$OnDisable
   void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButtonWithBottleSelection__OnDisable
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButtonWithBottleSelection_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButtonWithBottleSelection__OnDisable_1e92350
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c2813b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ebd20);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05788a58);
    FUN_012d0dc8(PTR_DAT_057ade50);
    FUN_012d0dc8(PTR_DAT_0576b0b0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0576e0c0);
    bRam0000000005c2813b = 1;
  }
  puVar3 = PTR_DAT_057ebd20;
  puVar1 = PTR_DAT_0576b0b0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar6 != 0) &&
     (System_Action_Int32Enum__int____ctor_1c4ba2c(lVar6,param_1,*(undefined8 *)PTR_DAT_057ade50,0),
     puVar2 = PTR_DAT_0578b048, lVar5 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum__int___Unsubscribe_333e088
              (lVar5,lVar6,*(undefined8 *)PTR_DAT_0576e0c0);
    lVar6 = *(long *)(param_1 + 0x18);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar5 != 0) &&
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_05788a58,0), lVar6 != 0))
    {
      if ((bRam0000000005c39420 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578b048,lVar5,0);
        bRam0000000005c39420 = 1;
      }
      puVar2 = PTR_DAT_0578b048;
      plVar9 = (long *)(lVar6 + 0x38);
      lVar6 = *plVar9;
      while ((plVar7 = (long *)System_Delegate__Remove_23e3b70(lVar6,lVar5,0), plVar7 == (long *)0x0
             || (*plVar7 == *(long *)puVar2))) {
        lVar8 = FUN_01351224(plVar9,plVar7,lVar6);
        bVar4 = lVar6 == lVar8;
        lVar6 = lVar8;
        if (bVar4) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(plVar7);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

