/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$DailyBottleStretchOut
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__DailyBottleStretchOut (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$DailyBottleStretchOut
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__DailyBottleStretchOut
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__DailyBottleStretchOut_22fe160
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if ((bRam0000000005c2a603 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05766908);
    FUN_012d0dc8(PTR_DAT_057cc518);
    bRam0000000005c2a603 = 1;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    uVar6 = *(undefined4 *)(*(long *)(param_1 + 0xc0) + 0x1c);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc518);
    if (lVar4 != 0) {
      DG_Tweening_TweenCallback_float____ctor_341f244
                (lVar4,param_1,*(undefined8 *)PTR_DAT_05766908,0);
      uVar5 = DG_Tweening_DOVirtual__Float_1edbb8c(0,0x3f800000,uVar6,lVar4,0);
      *(undefined8 *)(param_1 + 0x108) = uVar5;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)((param_1 + 0x108U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (param_1 + 0x108U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

