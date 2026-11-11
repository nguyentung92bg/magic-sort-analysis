/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__Complete_260c800
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = param_4;
  if ((bRam0000000005c2b9e4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_0580a950);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    lVar3 = FUN_012d0dc8(PTR_DAT_05777ce8);
    bRam0000000005c2b9e4 = 1;
  }
  if (*(char *)(param_4 + 0x40) != '\0') {
    return lVar3;
  }
  *(undefined1 *)(param_4 + 0x40) = 1;
  if ((*(long *)(param_4 + 0x60) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_4 + 0x60) + 0x40), lVar3 != 0)) {
    Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar3,param_4,0);
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_4,0,0);
    if (*(long *)(param_4 + 0x58) != 0) {
      puVar4 = (undefined8 *)(*(long *)(param_4 + 0x58) + 0x30);
      *puVar4 = 0;
      FUN_012d0d74(puVar4,0);
      if (*(long *)(param_4 + 0x60) != 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                  (*(long *)(param_4 + 0x60),param_4,0);
        if (*(long *)(param_4 + 0x68) != 0) {
          Modules_Contexts_GamePlay_SuperCharger_Strategies_KeySort_KeySortSuperChargerStrategy__OnSortKeyRevealStarted_20efe78
                    (*(long *)(param_4 + 0x68),param_4,0);
        }
        if ((*(long *)(param_4 + 0x60) != 0) &&
           (plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                       (*(long *)(param_4 + 0x60),0), plVar5 != (long *)0x0)) {
          lVar3 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575a2d8) {
                puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0270c964;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,0);
LAB_0270c964:
          fVar10 = (float)(*(code *)*puVar4)(plVar5,puVar4[1]);
          if (cRam0000000005c230ac == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230ac = '\x01';
          }
          puVar2 = PTR_DAT_05777ce8;
          puVar1 = PTR_DAT_057606c8;
          if ((*(long *)(param_4 + 0x60) != 0) && (*(long *)(param_4 + 0x50) != 0)) {
            lVar3 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* try { // try from 0270c9cc to 0280ca23 has its CatchHandler @ 0270c9cc
                       catch() { ... } // from try @ 0270c9cc with catch @ 0270c9cc
                       catch() { ... } // from try @ 0270ca9c with catch @ 0270c9cc
                       catch() { ... } // from try @ 0270cacc with catch @ 0270c9cc
                       catch() { ... } // from try @ 0270cb40 with catch @ 0270c9cc */
            fVar11 = (float)*(int *)(*(long *)(param_4 + 0x60) + 0x48) + _UNK_04359fb4;
            lVar3 = Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayRevealAnimation_260ca6c
                              (fVar10 + fVar11 * *(float *)(lVar3 + 0x18),
                               param_2 + fVar11 * *(float *)(lVar3 + 0x1c),
                               param_3 + fVar11 * *(float *)(lVar3 + 0x20));
            DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                      (lVar3,param_4,*(undefined8 *)puVar2);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_0579e470;
            if (lVar6 != 0) {
                    /* try { // try from 0270ca24 to 0280ca9b has its CatchHandler @ 0270ca9c */
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar6,param_4,*(undefined8 *)PTR_DAT_0580a950,0);
              uVar7 = *(undefined8 *)puVar1;
              if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
                *(long *)(lVar3 + 0x80) = lVar6;
                FUN_012d0d74((long *)(lVar3 + 0x80),lVar6,uVar7);
              }
              return lVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

