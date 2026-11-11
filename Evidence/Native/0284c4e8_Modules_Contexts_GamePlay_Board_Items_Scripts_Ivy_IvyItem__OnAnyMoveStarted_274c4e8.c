/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyItem$$OnAnyMoveStarted
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__OnAnyMoveStarted (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0284c70c) */
/* WARNING: Removing unreachable block (ram,0x0284c714) */
/* WARNING: Removing unreachable block (ram,0x0284c6a4) */
/* WARNING: Removing unreachable block (ram,0x0284c6ac) */
/* WARNING: Removing unreachable block (ram,0x0284c6d8) */
/* WARNING: Removing unreachable block (ram,0x0284c6e0) */
/* WARNING: Removing unreachable block (ram,0x0284c740) */
/* WARNING: Removing unreachable block (ram,0x0284c748) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyItem$$OnAnyMoveStarted
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__OnAnyMoveStarted
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t
   waterColorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__OnAnyMoveStarted_274c4e8
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam0000000005c2c6ca & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2c6ca = 1;
  }
  if (*(int *)(param_1 + 0x6c) != param_4) {
    return;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasOverlayBlocker_248d97c
                      (*(long *)(param_1 + 0x50),0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    puVar1 = PTR_DAT_057f2468;
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0x80), lVar4 != 0)) {
      if (0 < *(int *)(lVar4 + 0x18)) {
        iVar5 = 0;
        do {
          if (*(int *)(param_1 + 0x68) <= iVar5) {
            lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar4,iVar5,*(undefined8 *)puVar1);
            if (lVar3 == 0) goto LAB_0284c5e8;
            Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__RemoveBlocker_1e90d64
                      (lVar3,param_1,0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar4 + 0x18));
      }
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 != 0) {
        iVar5 = *(int *)(param_1 + 0x68);
        if ((*(long *)(lVar4 + 0x28) != 0) &&
           (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar4 + 0x28),0),
           lVar3 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar3,0 < iVar5,0);
          if ((*(long *)(lVar4 + 0x30) != 0) &&
             (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar4 + 0x30),0),
             lVar3 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar3,1 < iVar5,0);
            if ((*(long *)(lVar4 + 0x38) != 0) &&
               (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar4 + 0x38),0),
               lVar3 != 0)) {
              UnityEngine_GameObject__SetActive_408e318(lVar3,2 < iVar5,0);
              if ((*(long *)(lVar4 + 0x40) != 0) &&
                 (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar4 + 0x40),0),
                 lVar3 != 0)) {
                UnityEngine_GameObject__SetActive_408e318(lVar3,iVar5 == 4,0);
                if (*(long *)(lVar4 + 0x28) != 0) {
                  UnityEngine_SpriteRenderer__set_sprite_4095b64
                            (*(long *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x60),0);
                  if (*(long *)(lVar4 + 0x30) != 0) {
                    UnityEngine_SpriteRenderer__set_sprite_4095b64
                              (*(long *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x60),0);
                    if (*(long *)(lVar4 + 0x38) != 0) {
                      UnityEngine_SpriteRenderer__set_sprite_4095b64
                                (*(long *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x60),0);
                      if (*(long *)(lVar4 + 0x40) != 0) {
                        UnityEngine_SpriteRenderer__set_sprite_4095b64
                                  (*(long *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x60),0);
                        if (0 < iVar5) {
                          return;
                        }
                        if ((*(long *)(lVar4 + 0x68) != 0) &&
                           (lVar4 = UnityEngine_Component__get_gameObject_408b480
                                              (*(long *)(lVar4 + 0x68),0), lVar4 != 0)) {
                          if (pcRam0000000005c3a388 == (code *)0x0) {
                            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
                          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*pcRam0000000005c3a388)(lVar4,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
LAB_0284c5e8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

