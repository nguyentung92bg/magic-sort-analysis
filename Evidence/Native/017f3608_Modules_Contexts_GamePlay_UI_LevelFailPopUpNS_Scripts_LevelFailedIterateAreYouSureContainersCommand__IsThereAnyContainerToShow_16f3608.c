/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailedIterateAreYouSureContainersCommand$$IsThereAnyContainerToShow
bool Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__IsThereAnyContainerToShow (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand_o* __this, int32_t index, int32_t shownContainerCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailedIterateAreYouSureContainersCommand$$IsThereAnyContainerToShow
   bool 
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__IsThereAnyContainerToShow
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand_o*
   __this, int32_t index, int32_t shownContainerCount, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__IsThereAnyContainerToShow_16f3608
          (long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if ((bRam0000000005c24b69 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e51d0);
    FUN_012d0dc8(PTR_DAT_05783960);
    bRam0000000005c24b69 = 1;
  }
  puVar1 = PTR_DAT_05783960;
  if (1 < param_3) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) <= param_2) {
      return 0;
    }
    plVar3 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar2,param_2,*(undefined8 *)puVar1);
    if (plVar3 == (long *)0x0) break;
    uVar4 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    param_2 = param_2 + 1;
    lVar2 = *(long *)(param_1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

