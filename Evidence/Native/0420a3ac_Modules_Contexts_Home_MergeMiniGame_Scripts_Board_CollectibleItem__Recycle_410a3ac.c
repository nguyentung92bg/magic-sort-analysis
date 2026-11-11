/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$Recycle
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__Recycle (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$Recycle
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__Recycle
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem__Recycle_410a3ac
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if ((bRam0000000005c3abbd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c3abbd = 1;
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_012d0d74((undefined8 *)(param_1 + 0x88),0);
  Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__StopHint_410a584(param_1);
  Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__ResetSortingOrder_41095c4(param_1);
  lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
    lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (lVar2 != 0) {
      UnityEngine_Transform__SetParent_409352c(lVar2,0,0);
      lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      puVar1 = PTR_DAT_05805c10;
      if (lVar2 != 0) {
        lVar3 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                   *(undefined4 *)(lVar3 + 0x14),lVar2,0);
        lVar2 = *(long *)(param_1 + 0x98);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        if (lVar2 != 0) {
          puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
          UnityEngine_Transform__set_localPosition_4092ce0(*puVar4,puVar4[1],puVar4[2],lVar2,0);
          lVar2 = *(long *)(param_1 + 0x98);
          if (cRam0000000005c230a9 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230a9 = '\x01';
          }
          if (lVar2 != 0) {
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            UnityEngine_Transform__set_localScale_40932d0
                      (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                       *(undefined4 *)(lVar3 + 0x14),lVar2,0);
            puVar1 = PTR_DAT_057815e0;
            if (*(long *)(param_1 + 0xa8) != 0) {
              Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__Dispose_29857e0
                        (*(long *)(param_1 + 0xa8),0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              DG_Tweening_DOTween__Kill_1eda9a4(param_1,0,0);
              lVar2 = *(long *)(param_1 + 0x18);
              if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0420a56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar2 + 0x18))
                          (*(undefined8 *)(lVar2 + 0x40),param_1,*(undefined8 *)(lVar2 + 0x28));
                return;
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

