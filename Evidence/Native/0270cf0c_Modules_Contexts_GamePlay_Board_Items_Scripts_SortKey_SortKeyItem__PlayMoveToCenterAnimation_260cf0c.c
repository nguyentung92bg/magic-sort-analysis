/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$PlayMoveToCenterAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__PlayMoveToCenterAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, DG_Tweening_TweenCallback_o* onArrived, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$PlayMoveToCenterAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__PlayMoveToCenterAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this,
   DG_Tweening_TweenCallback_o* onArrived, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__PlayMoveToCenterAnimation_260cf0c
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000005c2b9e5 & 1) == 0) {
                    /* try { // try from 0270cf2c to 0280cf3b has its CatchHandler @ 0270d00c */
    FUN_012d0dc8(PTR_DAT_0579e470);
                    /* try { // try from 0270cf3c to 0280cffb has its CatchHandler @ 0270cb4c */
    FUN_012d0dc8(PTR_DAT_05777ce8);
    bRam0000000005c2b9e5 = 1;
  }
  puVar1 = PTR_DAT_05777ce8;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar2 = Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayMoveToCenterAnimation_260cfa0
                      ();
    lVar3 = DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                      (lVar2,param_1,*(undefined8 *)puVar1);
    if (param_2 != 0) {
      uVar4 = *(undefined8 *)PTR_DAT_0579e470;
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
        *(long *)(lVar2 + 0x80) = param_2;
        FUN_012d0d74((long *)(lVar2 + 0x80),param_2,uVar4);
      }
      return lVar2;
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

