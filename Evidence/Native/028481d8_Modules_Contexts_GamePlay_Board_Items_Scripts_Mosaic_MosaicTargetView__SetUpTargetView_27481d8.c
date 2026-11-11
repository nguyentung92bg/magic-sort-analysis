/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$SetUpTargetView
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__SetUpTargetView (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, int32_t targetColor, UnityEngine_Color_o targetColorValue, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$SetUpTargetView
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__SetUpTargetView
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, int32_t
   targetColor, UnityEngine_Color_o targetColorValue, int32_t index, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__SetUpTargetView_27481d8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined4 param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000005c2c6aa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a5ca0);
    FUN_012d0dc8(PTR_DAT_05778ae0);
    FUN_012d0dc8(PTR_DAT_057c0828);
    FUN_012d0dc8(PTR_DAT_057a6c70);
    FUN_012d0dc8(PTR_DAT_057e6e60);
    bRam0000000005c2c6aa = 1;
  }
  puVar3 = PTR_DAT_057e6e60;
  puVar2 = PTR_DAT_057a5ca0;
  puVar1 = PTR_DAT_05778ae0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  if (*(long *)(param_5 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_98,*(long *)(param_5 + 0x38),*(undefined8 *)PTR_DAT_057a6c70);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    lStack_70 = lStack_88;
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_80,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lStack_70,1,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)puVar2);
    if (*(long *)(param_5 + 0x40) != 0) {
      lVar5 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_5 + 0x40),0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      puVar1 = PTR_DAT_05805c10;
      if (lVar5 != 0) {
        lVar7 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                   *(undefined4 *)(lVar7 + 0x14),lVar5,0);
        if ((*(long *)(param_5 + 0x30) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_5 + 0x30) + 0xa0), lVar5 != 0)) {
          lVar7 = *(long *)(param_5 + 0x70);
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar5,*(undefined4 *)(param_5 + 0x68),*(undefined8 *)puVar3);
          if ((lVar5 != 0) && (uVar6 = UnityEngine_Object__get_name_4078cb0(lVar5,0), lVar7 != 0)) {
            UnityEngine_Animation__Play_1f7a100(lVar7,uVar6,0);
            if (*(long *)(param_5 + 0x58) != 0) {
              UnityEngine_GameObject__SetActive_408e318(*(long *)(param_5 + 0x58),1,0);
              *(undefined4 *)(param_5 + 0x98) = param_6;
              if (*(long *)(param_5 + 0x88) != 0) {
                UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                          (*(long *)(param_5 + 0x88),*(int *)(param_5 + 0x80) + ~param_7,0);
                if (*(long *)(param_5 + 0x20) != 0) {
                  UnityEngine_SpriteRenderer__set_color_4095de0
                            (param_1,param_2,param_3,param_4,*(long *)(param_5 + 0x20),0);
                  if (*(long *)(param_5 + 0x28) != 0) {
                    Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__Initialize_2748518
                              (param_1,param_2,param_3,param_4);
                    if (((*(long *)(param_5 + 0x28) != 0) &&
                        (lVar5 = UnityEngine_Component__get_gameObject_408b480
                                           (*(long *)(param_5 + 0x28),0), lVar5 != 0)) &&
                       (lVar5 = UnityEngine_GameObject__get_transform_408e25c(lVar5,0), lVar5 != 0))
                    {
                      UnityEngine_Transform__set_parent_40933e0
                                (lVar5,*(undefined8 *)(param_5 + 0x90),0);
                      if (*(long *)(param_5 + 0x28) != 0) {
                        lVar5 = UnityEngine_Component__get_transform_408b444
                                          (*(long *)(param_5 + 0x28),0);
                        if (cRam0000000005c230aa == '\0') {
                          FUN_012d0dc8(PTR_DAT_05805c10);
                          cRam0000000005c230aa = '\x01';
                        }
                        if (lVar5 != 0) {
                          puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                          UnityEngine_Transform__set_localPosition_4092ce0
                                    (*puVar8,puVar8[1],puVar8[2],lVar5,0);
                          Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__SetUpTargetType_2748548
                                    (param_5);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

