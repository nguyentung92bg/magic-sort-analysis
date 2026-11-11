/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$UpdateFrames
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__UpdateFrames (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$UpdateFrames
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__UpdateFrames
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__UpdateFrames_298a44c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c2d7b7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05772930);
    FUN_012d0dc8(PTR_DAT_057e6198);
    FUN_012d0dc8(PTR_DAT_057f5360);
    FUN_012d0dc8(PTR_DAT_05778128);
    bRam0000000005c2d7b7 = 1;
  }
  puVar2 = PTR_DAT_057e6198;
  puVar1 = PTR_DAT_05772930;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05778128);
    while( true ) {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar2);
      lVar3 = lStack_38;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar1);
        return;
      }
      if (lStack_38 == 0) break;
      uVar4 = System_Object__Equals_23edf0c
                        (*(undefined8 *)(lStack_38 + 0x40),*(undefined8 *)(param_1 + 0x20),0);
      Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSpriteSelectionFrame__SetFrameActive_298a720
                (lVar3,uVar4 & 1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

