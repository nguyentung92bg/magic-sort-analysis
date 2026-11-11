/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionContainer$$UpdateFrames
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__UpdateFrames (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionContainer$$UpdateFrames
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__UpdateFrames
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__UpdateFrames_298b3cc
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
  
                    /* try { // try from 02a8b3cc to 02b8b3d7 has its CatchHandler @ 02a8b2fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02a8b3c8 with catch @ 02a8b3d4
                        */
  if ((bRam0000000005c2d7c5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd78);
    FUN_012d0dc8(PTR_DAT_057fad50);
    FUN_012d0dc8(PTR_DAT_0576c160);
    FUN_012d0dc8(PTR_DAT_05769100);
    bRam0000000005c2d7c5 = 1;
  }
  puVar2 = PTR_DAT_057fad50;
  puVar1 = PTR_DAT_057bbd78;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05769100);
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
      Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame__SetFrameActive_298b6a0
                (lVar3,uVar4 & 1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

