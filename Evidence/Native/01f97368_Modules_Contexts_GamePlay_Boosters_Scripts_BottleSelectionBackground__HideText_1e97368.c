/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$HideText
void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__HideText (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$HideText
   void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__HideText
   (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__HideText_1e97368
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0x58);
  if (*plVar5 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar5,0,0);
  }
  uVar4 = DG_Tweening_DOTweenModuleUI__DOColor_33e37b4
                    (0,0,0,0,_UNK_04339be4,*(undefined8 *)(param_1 + 0x48),0);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
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

