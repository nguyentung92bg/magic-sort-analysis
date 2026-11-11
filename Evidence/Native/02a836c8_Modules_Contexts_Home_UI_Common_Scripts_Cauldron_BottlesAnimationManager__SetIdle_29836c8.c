/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.Cauldron.BottlesAnimationManager$$SetIdle
void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager__SetIdle (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.Cauldron.BottlesAnimationManager$$SetIdle
   void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager__SetIdle
   (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager__SetIdle_29836c8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c2d777 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f4510);
    FUN_012d0dc8(PTR_DAT_057da628);
    FUN_012d0dc8(PTR_DAT_05792828);
    FUN_012d0dc8(PTR_DAT_05814ca0);
    bRam0000000005c2d777 = 1;
  }
  puVar2 = PTR_DAT_057f4510;
  puVar1 = PTR_DAT_057da628;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_05814ca0);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar2);
        return;
      }
      if (lStack_28 == 0) break;
      Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottleAnimationController__ResetAnimations_2983300
                ();
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

