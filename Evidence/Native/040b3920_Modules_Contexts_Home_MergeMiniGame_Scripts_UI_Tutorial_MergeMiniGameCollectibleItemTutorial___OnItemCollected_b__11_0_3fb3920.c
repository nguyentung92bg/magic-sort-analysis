/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$<OnItemCollected>b__11_0
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial___OnItemCollected_b__11_0 (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$<OnItemCollected>b__11_0
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial___OnItemCollected_b__11_0
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial___OnItemCollected_b__11_0_3fb3920
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((bRam0000000005c3906f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d16a0);
    bRam0000000005c3906f = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x30),0), lVar4 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
    plVar5 = (long *)(param_1 + 0x80);
    if (*plVar5 != 0) {
      System_Threading_Tasks_TaskCompletionSource_bool___TrySetResult_1db4dec
                (*plVar5,1,*(undefined8 *)PTR_DAT_057d16a0);
    }
    *plVar5 = 0;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

