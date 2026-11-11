/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$RevealWithoutAnyDelay
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__RevealWithoutAnyDelay (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$RevealWithoutAnyDelay
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__RevealWithoutAnyDelay
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__RevealWithoutAnyDelay_2490f7c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_057606c8;
  if ((bRam0000000005c2b2a7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e3ae8);
    FUN_012d0dc8(PTR_DAT_0579fdd0);
    FUN_012d0dc8(PTR_DAT_057b78e8);
                    /* try { // try from 02590fc8 to 02690fcb has its CatchHandler @ 02590ffc */
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b2a7 = 1;
  }
                    /* try { // try from 02590fd8 to 02690fdf has its CatchHandler @ 02591000 */
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar6 != 0) {
                    /* try { // try from 02590fe0 to 02691017 has its CatchHandler @ 02590f3c */
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057e3ae8,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02590fc8 with catch @ 02590ffc
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02590fd8 with catch @ 02591000
                        */
    DG_Tweening_DOVirtual__DelayedCall_1edcb38(0,lVar6,0,0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 02591018 to 0269102f has its CatchHandler @ 0259105c */
    if (lVar6 != 0) {
                    /* try { // try from 02591030 to 0269104b has its CatchHandler @ 02590f3c */
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_0579fdd0,0);
      DG_Tweening_DOVirtual__DelayedCall_1edcb38(0,lVar6,0,0);
                    /* try { // try from 0259104c to 0269105b has its CatchHandler @ 0259105c */
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 02591018 with catch @ 0259105c
                       catch() { ... } // from try @ 0259104c with catch @ 0259105c */
                    /* try { // try from 02591060 to 02691063 has its CatchHandler @ 0259106c */
                    /* try { // try from 02591064 to 0269106f has its CatchHandler @ 02590f3c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02591060 with catch @ 0259106c
                        */
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057b78e8,0);
        puVar1 = PTR_DAT_057815e0;
        if ((bRam0000000005c28460 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057815e0,0,0);
          FUN_012d0dc8(PTR_DAT_057d6890);
          FUN_012d0dc8(PTR_DAT_057ca968);
          FUN_012d0dc8(PTR_DAT_057f1100);
          bRam0000000005c28460 = 1;
        }
        puVar4 = PTR_DAT_057f1100;
        puVar3 = PTR_DAT_057d6890;
        puVar2 = PTR_DAT_057ca968;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        DG_Tweening_DOTween__Sequence_1eda154();
        uVar5 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(0);
        uVar5 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                          (uVar5,lVar6,*(undefined8 *)puVar3);
        lVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                          (uVar5,0,0,*(undefined8 *)puVar4);
        uVar5 = *(undefined8 *)puVar2;
        if (((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) &&
           (*(char *)(lVar6 + 0x100) == '\0')) {
          *(undefined1 *)(lVar6 + 0x9c) = 1;
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

