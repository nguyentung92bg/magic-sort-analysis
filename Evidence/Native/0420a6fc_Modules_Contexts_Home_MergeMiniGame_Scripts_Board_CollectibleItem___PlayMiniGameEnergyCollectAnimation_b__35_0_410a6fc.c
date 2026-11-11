/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$<PlayMiniGameEnergyCollectAnimation>b__35_0
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem___PlayMiniGameEnergyCollectAnimation_b__35_0 (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$<PlayMiniGameEnergyCollectAnimation>b__35_0
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem___PlayMiniGameEnergyCollectAnimation_b__35_0
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem___PlayMiniGameEnergyCollectAnimation_b__35_0_410a6fc
               (long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c3abbe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d3ea8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057e6350);
    bRam0000000005c3abbe = 1;
  }
  puVar4 = PTR_DAT_057d3ea8;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar4);
  if (*(long *)(param_1 + 0xd0) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc4);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x14);
    lVar6 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if ((lVar6 != 0) && (UnityEngine_Transform__get_position_4092b08(lVar6,0), lVar5 != 0)) {
      if (*(long *)(lVar5 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343f378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057e6350 + 0x20) + 0xc0) + 0x18)
                    + 8))(*(long *)(lVar5 + 0x18),uVar1,uVar2);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

