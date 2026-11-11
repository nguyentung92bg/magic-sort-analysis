/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this,
   UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t duckType, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__Prepare_2757394
               (float param_1,float param_2,float param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,long param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  
  if ((bRam0000000005c2c72a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814978);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057cdfb8);
    bRam0000000005c2c72a = 1;
  }
  *(undefined8 *)(param_4 + 0x50) = param_7;
  *(undefined4 *)(param_4 + 0x68) = param_9;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  if (*(long *)(param_4 + 0x58) != 0) {
    System_Collections_Generic_List_object___AddRange_21fcc58
              (*(long *)(param_4 + 0x58),param_8,*(undefined8 *)PTR_DAT_05814978);
    if (*(long *)(param_4 + 0x58) != 0) {
      iVar1 = *(int *)(*(long *)(param_4 + 0x58) + 0x18);
      if (cRam0000000005c28262 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c28262 = '\x01';
      }
      uVar14 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x3c);
      fVar15 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x44);
      fVar13 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetDistanceBetweenBottles_22fade0
                                (0);
      fVar13 = fVar13 * (float)(iVar1 + -1) * 0.5;
      *(ulong *)(param_4 + 0x34) =
           CONCAT44(param_2 + (float)((ulong)uVar14 >> 0x20) * fVar13,
                    param_1 + (float)uVar14 * fVar13);
      *(float *)(param_4 + 0x3c) = param_3 + fVar15 * fVar13;
      if (((param_8 != 0) && (*(long *)(param_4 + 0x60) != 0)) &&
         (lVar4 = *(long *)(param_4 + 0x48), lVar4 != 0)) {
        iVar1 = *(int *)(param_8 + 0x18);
        uVar2 = *(undefined4 *)(*(long *)(param_4 + 0x60) + 0x18);
        if ((bRam0000000005c2c736 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575a2d8);
          FUN_012d0dc8(PTR_DAT_05808028);
          FUN_012d0dc8(PTR_DAT_057ad300);
          bRam0000000005c2c736 = 1;
        }
        *(undefined1 *)(lVar4 + 0xb8) = 0;
        *(undefined4 *)(lVar4 + 0xbc) = 0;
        *(undefined1 *)(lVar4 + 0xc0) = 0;
        if (*(long *)(lVar4 + 0x70) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar4 + 0x70),1,0);
          if ((*(long *)(lVar4 + 0x28) != 0) &&
             (lVar5 = *(long *)(*(long *)(lVar4 + 0x28) + 0x40), lVar5 != 0)) {
            lVar12 = *(long *)(lVar4 + 0x90);
            uVar14 = UnityEngine_Object__get_name_4078cb0(lVar5,0);
            if (lVar12 != 0) {
              UnityEngine_Animation__Play_1f7a100(lVar12,uVar14,0);
              *(undefined4 *)(lVar4 + 0xc4) = param_9;
              lVar5 = *(long *)(lVar4 + 0x38);
              if (cRam0000000005c230a9 == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230a9 = '\x01';
              }
              puVar3 = PTR_DAT_05805c10;
              if (lVar5 != 0) {
                lVar12 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                UnityEngine_Transform__set_localScale_40932d0
                          (*(undefined4 *)(lVar12 + 0xc),*(undefined4 *)(lVar12 + 0x10),
                           *(undefined4 *)(lVar12 + 0x14),lVar5,0);
                if (*(long *)(lVar4 + 0x60) != 0) {
                  UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar4 + 0x60),1,0);
                  if ((*(long *)(lVar4 + 0x88) != 0) &&
                     (lVar5 = UnityEngine_Component__get_gameObject_408b480
                                        (*(long *)(lVar4 + 0x88),0), lVar5 != 0)) {
                    UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
                    if (*(long *)(lVar4 + 0x88) != 0) {
                      lVar5 = UnityEngine_Component__get_transform_408b444
                                        (*(long *)(lVar4 + 0x88),0);
                      lVar12 = *(long *)(lVar4 + 0x28);
                      if ((lVar12 != 0) && (lVar5 != 0)) {
                        UnityEngine_Transform__set_localScale_40932d0
                                  (*(undefined4 *)(lVar12 + 0x70),*(undefined4 *)(lVar12 + 0x74),
                                   *(undefined4 *)(lVar12 + 0x78),lVar5,0);
                        if (*(long *)(lVar4 + 0x88) != 0) {
                          lVar5 = UnityEngine_Component__get_transform_408b444
                                            (*(long *)(lVar4 + 0x88),0);
                          lVar12 = *(long *)(lVar4 + 0x28);
                          if ((lVar12 != 0) && (lVar5 != 0)) {
                            UnityEngine_Transform__set_localPosition_4092ce0
                                      (*(undefined4 *)(lVar12 + 0x7c),*(undefined4 *)(lVar12 + 0x80)
                                       ,*(undefined4 *)(lVar12 + 0x84),lVar5,0);
                            lVar5 = *(long *)(lVar4 + 0x48);
                            if (cRam0000000005c230a9 == '\0') {
                              FUN_012d0dc8(PTR_DAT_05805c10);
                              cRam0000000005c230a9 = '\x01';
                            }
                            if (lVar5 != 0) {
                              lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
                              UnityEngine_Transform__set_localScale_40932d0
                                        (*(undefined4 *)(lVar12 + 0xc),
                                         *(undefined4 *)(lVar12 + 0x10),
                                         *(undefined4 *)(lVar12 + 0x14),lVar5,0);
                              lVar5 = *(long *)(lVar4 + 0x48);
                              if (cRam0000000005c230aa == '\0') {
                                FUN_012d0dc8(PTR_DAT_05805c10);
                                cRam0000000005c230aa = '\x01';
                              }
                              pfVar7 = *(float **)(*(long *)puVar3 + 0xb8);
                              UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                                        (*pfVar7 * _UNK_04339bec,pfVar7[1] * _UNK_04339bec,
                                         pfVar7[2] * _UNK_04339bec,0);
                              if (lVar5 != 0) {
                                UnityEngine_Transform__set_localRotation_4092f3c(lVar5,0);
                                if (*(long *)(lVar4 + 0x48) != 0) {
                                  UnityEngine_Transform__set_localPosition_4092ce0
                                            (0,0xc0300000,0,*(long *)(lVar4 + 0x48),0);
                                  if ((*(long *)(lVar4 + 0x98) != 0) &&
                                     (lVar5 = UnityEngine_Component__get_gameObject_408b480
                                                        (*(long *)(lVar4 + 0x98),0), lVar5 != 0)) {
                                    UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
                                    Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetSorting_27582d0
                                              (lVar4,param_5,param_6);
                                    plVar10 = *(long **)(lVar4 + 0x18);
                                    if (plVar10 != (long *)0x0) {
                                      lVar5 = *plVar10;
                                      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
                                      if (uVar8 != 0) {
                                        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575a2d8) {
                                            puVar6 = (undefined8 *)
                                                     (lVar5 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
                                            goto LAB_028577ec;
                                          }
                                          uVar8 = uVar8 - 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar8 != 0);
                                      }
                                      puVar6 = (undefined8 *)
                                               FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_028577ec:
                                      lVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
                                      if (cRam0000000005c230a9 == '\0') {
                                        FUN_012d0dc8(PTR_DAT_05805c10);
                                        cRam0000000005c230a9 = '\x01';
                                      }
                                      if (lVar5 != 0) {
                                        lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
                                        UnityEngine_Transform__set_localScale_40932d0
                                                  (*(undefined4 *)(lVar12 + 0xc),
                                                   *(undefined4 *)(lVar12 + 0x10),
                                                   *(undefined4 *)(lVar12 + 0x14),lVar5,0);
                                        puVar3 = PTR_DAT_057ad300;
                                        lVar5 = *(long *)(lVar4 + 0x50);
                                        if (lVar5 != 0) {
                                          iVar11 = 1;
                                          while (iVar11 + -1 < *(int *)(lVar5 + 0x18)) {
                                            lVar5 = 
                                                  System_Collections_Generic_List_object___get_Item_21fc76c
                                                            (lVar5,iVar11 + -1,*(undefined8 *)puVar3
                                                            );
                                            if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0))
                                            goto LAB_02857984;
                                            UnityEngine_GameObject__SetActive_408e318
                                                      (*(long *)(lVar5 + 0x10),iVar1 == iVar11,0);
                                            lVar5 = *(long *)(lVar4 + 0x50);
                                            iVar11 = iVar11 + 1;
                                            if (lVar5 == 0) goto LAB_02857984;
                                          }
                                          Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetParticle_2759e34
                                                    (lVar4,param_9,iVar1);
                                          Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetRemainingDuckCount_2759444
                                                    (lVar4,uVar2);
                                          if (*(long *)(lVar4 + 0x28) != 0) {
                                            lVar5 = 
                                                  Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig__GetDuckHouseConfigBySize_2756640
                                                            (*(long *)(lVar4 + 0x28),iVar1 + -1);
                                            if (((*(long *)(lVar4 + 0x70) != 0) &&
                                                (lVar12 = 
                                                  UnityEngine_GameObject__get_transform_408e25c
                                                            (*(long *)(lVar4 + 0x70),0), lVar5 != 0)
                                                ) && (lVar12 != 0)) {
                                              UnityEngine_Transform__set_localScale_40932d0
                                                        (*(undefined4 *)(lVar5 + 0x2c),
                                                         *(undefined4 *)(lVar5 + 0x30),
                                                         *(undefined4 *)(lVar5 + 0x34),lVar12,0);
                                              if ((*(long *)(lVar4 + 0x60) != 0) &&
                                                 (lVar12 = 
                                                  UnityEngine_GameObject__get_transform_408e25c
                                                            (*(long *)(lVar4 + 0x60),0), lVar12 != 0
                                                 )) {
                                                UnityEngine_Transform__set_localScale_40932d0
                                                          (*(undefined4 *)(lVar5 + 0x38),
                                                           *(undefined4 *)(lVar5 + 0x3c),
                                                           *(undefined4 *)(lVar5 + 0x40),lVar12,0);
                                                if ((*(long *)(lVar4 + 0x60) != 0) &&
                                                   (lVar12 = 
                                                  UnityEngine_GameObject__get_transform_408e25c
                                                            (*(long *)(lVar4 + 0x60),0), lVar12 != 0
                                                  )) {
                                                  UnityEngine_Transform__set_localPosition_4092ce0
                                                            (*(undefined4 *)(lVar5 + 0x44),
                                                             *(undefined4 *)(lVar5 + 0x48),
                                                             *(undefined4 *)(lVar5 + 0x4c),lVar12,0)
                                                  ;
                                                  if (*(long *)(lVar4 + 0xb0) != 0) {
                                                    UnityEngine_Animator__Play_1f79b70
                                                              (*(long *)(lVar4 + 0xb0),
                                                               *(undefined4 *)(lVar4 + 200),0);
                                                    if (*(long *)(lVar4 + 0xb0) != 0) {
                                                      UnityEngine_Behaviour__set_enabled_408d778
                                                                (*(long *)(lVar4 + 0xb0),0,0);
                                                      if (*(long *)(lVar4 + 0xa0) != 0) {
                                                                                                                
                                                  Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView__SetDuckType_2756bf0
                                                            ();
                                                  if (*(long *)(lVar4 + 0x20) != 0) {
                                                    uVar8 = 
                                                  Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckCoverConfig_2756a10
                                                            (*(long *)(lVar4 + 0x20),param_9,
                                                             &stack0xffffffffffffffc0);
                                                  if ((uVar8 & 1) == 0) {
                                                    return;
                                                  }
                                                  if (*(long *)(lVar4 + 0x78) != 0) {
                                                    UnityEngine_SpriteRenderer__set_sprite_4095b64
                                                              (*(long *)(lVar4 + 0x78),0,0);
                                                    lVar5 = *(long *)(lVar4 + 0x80);
                                                    if (lVar5 != 0) {
                                                      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_02859f98:
                    /* WARNING: Subroutine does not return */
                                                        FUN_012d0ef8();
                                                      }
                                                      if (*(long *)(lVar5 + 0x20) != 0) {
                                                                                                                
                                                  UnityEngine_SpriteRenderer__set_sprite_4095b64
                                                            (*(long *)(lVar5 + 0x20),0,0);
                                                  lVar5 = *(long *)(lVar4 + 0x80);
                                                  if (lVar5 != 0) {
                                                    if (*(uint *)(lVar5 + 0x18) < 2)
                                                    goto LAB_02859f98;
                                                    if (*(long *)(lVar5 + 0x28) != 0) {
                                                      UnityEngine_SpriteRenderer__set_sprite_4095b64
                                                                (*(long *)(lVar5 + 0x28),0,0);
                                                      if (*(long *)(lVar4 + 0x88) != 0) {
                                                                                                                
                                                  UnityEngine_SpriteRenderer__set_sprite_4095b64
                                                            (*(long *)(lVar4 + 0x88),0,0);
                                                  return;
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
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_02857984:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

