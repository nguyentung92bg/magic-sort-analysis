/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailedIterateAreYouSureContainersCommand$$InitializeAreYouSureContainers
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__InitializeAreYouSureContainers (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailedIterateAreYouSureContainersCommand$$InitializeAreYouSureContainers
   void 
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__InitializeAreYouSureContainers
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__InitializeAreYouSureContainers_16f36bc
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if ((bRam0000000005c24b6a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791ab8);
    FUN_012d0dc8(PTR_DAT_057f0910);
    FUN_012d0dc8(PTR_DAT_05763110);
    FUN_012d0dc8(PTR_DAT_057c7348);
    bRam0000000005c24b6a = 1;
  }
  puVar2 = PTR_DAT_057f0910;
  puVar1 = PTR_DAT_05791ab8;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_057c7348);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar1);
        return;
      }
      if (plStack_28 == (long *)0x0) break;
      (**(code **)(*plStack_28 + 0x188))(plStack_28,*(undefined8 *)(*plStack_28 + 400));
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

