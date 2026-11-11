/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t woodboxKeyType, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this,
   UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t woodboxKeyType, int32_t
   blockerVariant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__Prepare_2302df4
               (float param_1,float param_2,float param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9,
               undefined4 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  float *pfVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  
  if ((bRam0000000005c2a671 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814978);
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c2a671 = 1;
  }
  *(undefined8 *)(param_4 + 0x50) = param_7;
  *(int *)(param_4 + 0x44) = param_9;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  if (*(long *)(param_4 + 0x58) != 0) {
    System_Collections_Generic_List_object___AddRange_21fcc58
              (*(long *)(param_4 + 0x58),param_8,*(undefined8 *)PTR_DAT_05814978);
    if (*(long *)(param_4 + 0x58) != 0) {
      iVar11 = *(int *)(*(long *)(param_4 + 0x58) + 0x18);
      if (cRam0000000005c28262 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c28262 = '\x01';
      }
      lVar3 = *(long *)(param_4 + 0x48);
      uVar15 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x3c);
      fVar16 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x44);
      fVar14 = (float)(iVar11 + -1) * _UNK_0438e154 * 0.5;
      *(ulong *)(param_4 + 0x34) =
           CONCAT44(param_2 + (float)((ulong)uVar15 >> 0x20) * fVar14,
                    param_1 + (float)uVar15 * fVar14);
      *(float *)(param_4 + 0x3c) = param_3 + fVar14 * fVar16;
      if (lVar3 != 0) {
        if ((bRam0000000005c2b9c3 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575a2d8);
          FUN_012d0dc8(PTR_DAT_057885c8);
          FUN_012d0dc8(PTR_DAT_057fc8c8);
          bRam0000000005c2b9c3 = 1;
        }
        Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetVariant_26078a8
                  (lVar3,param_10);
        *(int *)(lVar3 + 0x28) = param_9;
        if (((*(long *)(lVar3 + 0x30) != 0) &&
            (lVar4 = *(long *)(*(long *)(lVar3 + 0x30) + 0x40), lVar4 != 0)) &&
           (lVar4 = UnityEngine_Component__get_gameObject_408b480(lVar4,0), lVar4 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
          if (*(long *)(lVar3 + 0x30) != 0) {
            lVar4 = *(long *)(*(long *)(lVar3 + 0x30) + 0x48);
            if (cRam0000000005c230a9 == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230a9 = '\x01';
            }
            puVar1 = PTR_DAT_05805c10;
            if (lVar4 != 0) {
              lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
              UnityEngine_Transform__set_localScale_40932d0
                        (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                         *(undefined4 *)(lVar6 + 0x14),lVar4,0);
              if (*(long *)(lVar3 + 0x30) != 0) {
                lVar4 = *(long *)(*(long *)(lVar3 + 0x30) + 0x48);
                if (cRam0000000005c230aa == '\0') {
                  FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c230aa = '\x01';
                }
                pfVar7 = *(float **)(*(long *)puVar1 + 0xb8);
                UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                          (*pfVar7 * _UNK_04339bec,pfVar7[1] * _UNK_04339bec,
                           pfVar7[2] * _UNK_04339bec,0);
                if (lVar4 != 0) {
                  UnityEngine_Transform__set_localRotation_4092f3c(lVar4,0);
                  if ((*(long *)(lVar3 + 0x30) != 0) &&
                     (lVar4 = *(long *)(*(long *)(lVar3 + 0x30) + 0x48), lVar4 != 0)) {
                    UnityEngine_Transform__set_localPosition_4092ce0(0,0xc0300000,0,lVar4,0);
                    Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetSorting_2607ee0
                              (lVar3,param_5,param_6);
                    plVar13 = *(long **)(lVar3 + 0x18);
                    if (plVar13 != (long *)0x0) {
                      lVar4 = *plVar13;
                      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
                      if (uVar9 != 0) {
                        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0575a2d8) {
                            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
                            goto LAB_02707c7c;
                          }
                          uVar9 = uVar9 - 1;
                          piVar10 = piVar10 + 4;
                        } while (uVar9 != 0);
                      }
                      puVar5 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_02707c7c:
                      lVar4 = (*(code *)*puVar5)(plVar13,puVar5[1]);
                      if (cRam0000000005c230a9 == '\0') {
                        FUN_012d0dc8(PTR_DAT_05805c10);
                        cRam0000000005c230a9 = '\x01';
                      }
                      if (lVar4 != 0) {
                        lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
                        UnityEngine_Transform__set_localScale_40932d0
                                  (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                                   *(undefined4 *)(lVar6 + 0x14),lVar4,0);
                        puVar2 = PTR_DAT_057fc8c8;
                        lVar4 = *(long *)(lVar3 + 0x30);
                        if (lVar4 != 0) {
                          iVar12 = 0;
                          iVar11 = iVar11 + -1;
LAB_02707ce4:
                          lVar6 = *(long *)(lVar4 + 0x50);
                          if (lVar6 != 0) {
                            if (iVar12 < *(int *)(lVar6 + 0x18)) {
                              lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                (lVar6,iVar12,*(undefined8 *)puVar2);
                              if (((lVar4 != 0) && (lVar6 = *(long *)(lVar3 + 0x30), lVar6 != 0)) &&
                                 (*(long *)(lVar4 + 0x10) != 0)) {
                                UnityEngine_Transform__set_localScale_40932d0
                                          (*(undefined4 *)(lVar6 + 0x80),
                                           *(undefined4 *)(lVar6 + 0x84),
                                           *(undefined4 *)(lVar6 + 0x88),*(long *)(lVar4 + 0x10),0);
                                lVar6 = *(long *)(lVar3 + 0x30);
                                if ((lVar6 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
                                  UnityEngine_Transform__set_localScale_40932d0
                                            (*(undefined4 *)(lVar6 + 0x80),
                                             *(undefined4 *)(lVar6 + 0x84),
                                             *(undefined4 *)(lVar6 + 0x88),*(long *)(lVar4 + 0x18),0
                                            );
                                  if (*(long *)(lVar4 + 0x30) != 0) {
                                    UnityEngine_GameObject__SetActive_408e318
                                              (*(long *)(lVar4 + 0x30),iVar11 == iVar12,0);
                                    if (*(long *)(lVar4 + 0x38) != 0) {
                                      UnityEngine_GameObject__SetActive_408e318
                                                (*(long *)(lVar4 + 0x38),iVar11 == iVar12,0);
                                      if ((*(long *)(lVar4 + 0x20) != 0) &&
                                         (lVar6 = UnityEngine_Component__get_gameObject_408b480
                                                            (*(long *)(lVar4 + 0x20),0), lVar6 != 0)
                                         ) {
                                        UnityEngine_GameObject__SetActive_408e318
                                                  (lVar6,iVar11 == iVar12,0);
                                        if ((*(long *)(lVar4 + 0x28) != 0) &&
                                           (lVar4 = UnityEngine_Component__get_gameObject_408b480
                                                              (*(long *)(lVar4 + 0x28),0),
                                           lVar4 != 0)) {
                                          UnityEngine_GameObject__SetActive_408e318
                                                    (lVar4,iVar11 == iVar12,0);
                                          if ((*(long *)(lVar3 + 0x30) != 0) &&
                                             (lVar4 = *(long *)(*(long *)(lVar3 + 0x30) + 0x60),
                                             lVar4 != 0)) {
                                            lVar4 = UnityEngine_Component__get_transform_408b444
                                                              (lVar4,0);
                                            if (cRam0000000005c230aa == '\0') {
                                              FUN_012d0dc8(puVar1);
                                              cRam0000000005c230aa = '\x01';
                                            }
                                            if (lVar4 != 0) {
                                              puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                                              UnityEngine_Transform__set_localPosition_4092ce0
                                                        (*puVar8,puVar8[1],puVar8[2],lVar4,0);
                                              if ((*(long *)(lVar3 + 0x30) != 0) &&
                                                 (lVar4 = *(long *)(*(long *)(lVar3 + 0x30) + 0x68),
                                                 lVar4 != 0)) {
                                                lVar4 = UnityEngine_Component__get_transform_408b444
                                                                  (lVar4,0);
                                                if (cRam0000000005c230aa == '\0') {
                                                  FUN_012d0dc8(puVar1);
                                                  cRam0000000005c230aa = '\x01';
                                                }
                                                if (lVar4 != 0) goto code_r0x02707e48;
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
                            else if ((*(long *)(lVar4 + 0x60) != 0) &&
                                    (lVar4 = UnityEngine_Component__get_gameObject_408b480
                                                       (*(long *)(lVar4 + 0x60),0), lVar4 != 0)) {
                              UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
                              if ((*(long *)(lVar3 + 0x30) != 0) &&
                                 ((lVar4 = *(long *)(*(long *)(lVar3 + 0x30) + 0x68), lVar4 != 0 &&
                                  (lVar4 = UnityEngine_Component__get_gameObject_408b480(lVar4,0),
                                  lVar4 != 0)))) {
                                UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
                                if ((bRam0000000005c2b9c4 & 1) == 0) {
                                  FUN_012d0dc8(PTR_DAT_057f6840);
                                  FUN_012d0dc8(PTR_DAT_057d8f98);
                                  bRam0000000005c2b9c4 = 1;
                                }
                                lVar4 = *(long *)(lVar3 + 0x30);
                                if (lVar4 == 0) goto LAB_02708098;
                                lVar6 = *(long *)(lVar4 + 0x40);
                                switch(param_9 + -1) {
                                case 0:
                                  if (*(long *)(lVar4 + 0x28) == 0) goto LAB_02708098;
                                  puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x28) + 0xe0);
                                  break;
                                case 1:
                                  if (*(long *)(lVar4 + 0x28) != 0) {
                                    puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x28) + 0xf0);
                                    goto joined_r0x02707fec;
                                  }
                                  goto LAB_02708098;
                                case 2:
                                  if (*(long *)(lVar4 + 0x28) != 0) {
                                    puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x28) + 0xd8);
joined_r0x02707fec:
                                    if (lVar6 != 0) goto LAB_0270802c;
                                  }
                                  goto LAB_02708098;
                                case 3:
                                  if (*(long *)(lVar4 + 0x28) == 0) goto LAB_02708098;
                                  puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x28) + 0xd0);
                                  break;
                                case 4:
                                  if (*(long *)(lVar4 + 0x28) == 0) goto LAB_02708098;
                                  puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x28) + 0xf8);
                                  break;
                                case 5:
                                  if (*(long *)(lVar4 + 0x28) == 0) goto LAB_02708098;
                                  puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x28) + 0xe8);
                                  break;
                                default:
                                  if (*(long *)(lVar4 + 0x28) == 0) goto LAB_02708098;
                                  puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x28) + 0xa8);
                                }
                                if (lVar6 == 0) goto LAB_02708098;
LAB_0270802c:
                                UnityEngine_U2D_Animation_SpriteLibrary__set_spriteLibraryAsset_1e38a88
                                          (lVar6,*puVar5,0);
                                puVar1 = PTR_DAT_057d8f98;
                                lVar4 = *(long *)(lVar3 + 0x30);
                                if (lVar4 == 0) goto LAB_02708098;
                                iVar11 = 0;
                                goto LAB_0270804c;
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
LAB_02707edc:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
LAB_0270804c:
  lVar4 = *(long *)(lVar4 + 0x58);
  if (lVar4 == 0) {
LAB_02708098:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(int *)(lVar4 + 0x18) <= iVar11) {
    return;
  }
  lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                    (lVar4,iVar11,*(undefined8 *)puVar1);
  if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject_408b480(lVar4,0), lVar4 == 0))
  goto LAB_02708098;
  UnityEngine_GameObject__SetActive_408e318(lVar4,param_9 + -1 == iVar11,0);
  lVar4 = *(long *)(lVar3 + 0x30);
  iVar11 = iVar11 + 1;
  if (lVar4 == 0) goto LAB_02708098;
  goto LAB_0270804c;
code_r0x02707e48:
  puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
  UnityEngine_Transform__set_localPosition_4092ce0(*puVar8,puVar8[1],puVar8[2],lVar4,0);
  lVar4 = *(long *)(lVar3 + 0x30);
  iVar12 = iVar12 + 1;
  if (lVar4 == 0) goto LAB_02707edc;
  goto LAB_02707ce4;
}

