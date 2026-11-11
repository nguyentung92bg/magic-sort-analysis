/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t bottlesCount, int32_t duckType, int32_t duckItemsCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t bottlesCount, int32_t
   duckType, int32_t duckItemsCount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__Prepare_275750c
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  
  if ((bRam0000000005c2c736 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05808028);
    FUN_012d0dc8(PTR_DAT_057ad300);
    bRam0000000005c2c736 = 1;
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x70),1,0);
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x40), lVar2 != 0)) {
      lVar10 = *(long *)(param_1 + 0x90);
      uVar3 = UnityEngine_Object__get_name_4078cb0(lVar2,0);
      if (lVar10 != 0) {
        UnityEngine_Animation__Play_1f7a100(lVar10,uVar3,0);
        *(undefined4 *)(param_1 + 0xc4) = param_5;
        lVar2 = *(long *)(param_1 + 0x38);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        puVar1 = PTR_DAT_05805c10;
        if (lVar2 != 0) {
          lVar10 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
          UnityEngine_Transform__set_localScale_40932d0
                    (*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 0x10),
                     *(undefined4 *)(lVar10 + 0x14),lVar2,0);
          if (*(long *)(param_1 + 0x60) != 0) {
            UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x60),1,0);
            if ((*(long *)(param_1 + 0x88) != 0) &&
               (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x88),0),
               lVar2 != 0)) {
              UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
              if (*(long *)(param_1 + 0x88) != 0) {
                lVar2 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x88),0);
                lVar10 = *(long *)(param_1 + 0x28);
                if ((lVar10 != 0) && (lVar2 != 0)) {
                  UnityEngine_Transform__set_localScale_40932d0
                            (*(undefined4 *)(lVar10 + 0x70),*(undefined4 *)(lVar10 + 0x74),
                             *(undefined4 *)(lVar10 + 0x78),lVar2,0);
                  if (*(long *)(param_1 + 0x88) != 0) {
                    lVar2 = UnityEngine_Component__get_transform_408b444
                                      (*(long *)(param_1 + 0x88),0);
                    lVar10 = *(long *)(param_1 + 0x28);
                    if ((lVar10 != 0) && (lVar2 != 0)) {
                      UnityEngine_Transform__set_localPosition_4092ce0
                                (*(undefined4 *)(lVar10 + 0x7c),*(undefined4 *)(lVar10 + 0x80),
                                 *(undefined4 *)(lVar10 + 0x84),lVar2,0);
                      lVar2 = *(long *)(param_1 + 0x48);
                      if (cRam0000000005c230a9 == '\0') {
                        FUN_012d0dc8(PTR_DAT_05805c10);
                        cRam0000000005c230a9 = '\x01';
                      }
                      if (lVar2 != 0) {
                        lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
                        UnityEngine_Transform__set_localScale_40932d0
                                  (*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 0x10),
                                   *(undefined4 *)(lVar10 + 0x14),lVar2,0);
                        lVar2 = *(long *)(param_1 + 0x48);
                        if (cRam0000000005c230aa == '\0') {
                          FUN_012d0dc8(PTR_DAT_05805c10);
                          cRam0000000005c230aa = '\x01';
                        }
                        pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
                        UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                                  (*pfVar5 * _UNK_04339bec,pfVar5[1] * _UNK_04339bec,
                                   pfVar5[2] * _UNK_04339bec,0);
                        if (lVar2 != 0) {
                          UnityEngine_Transform__set_localRotation_4092f3c(lVar2,0);
                          if (*(long *)(param_1 + 0x48) != 0) {
                            UnityEngine_Transform__set_localPosition_4092ce0
                                      (0,0xc0300000,0,*(long *)(param_1 + 0x48),0);
                            if ((*(long *)(param_1 + 0x98) != 0) &&
                               (lVar2 = UnityEngine_Component__get_gameObject_408b480
                                                  (*(long *)(param_1 + 0x98),0), lVar2 != 0)) {
                              UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
                              Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetSorting_27582d0
                                        (param_1,param_2,param_3);
                              plVar8 = *(long **)(param_1 + 0x18);
                              if (plVar8 != (long *)0x0) {
                                lVar2 = *plVar8;
                                uVar6 = (ulong)*(ushort *)(lVar2 + 0x12a);
                                if (uVar6 != 0) {
                                  piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0575a2d8) {
                                      puVar4 = (undefined8 *)
                                               (lVar2 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
                                      goto LAB_028577ec;
                                    }
                                    uVar6 = uVar6 - 1;
                                    piVar7 = piVar7 + 4;
                                  } while (uVar6 != 0);
                                }
                                puVar4 = (undefined8 *)
                                         FUN_0131971c(plVar8,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_028577ec:
                                lVar2 = (*(code *)*puVar4)(plVar8,puVar4[1]);
                                if (cRam0000000005c230a9 == '\0') {
                                  FUN_012d0dc8(PTR_DAT_05805c10);
                                  cRam0000000005c230a9 = '\x01';
                                }
                                if (lVar2 != 0) {
                                  lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
                                  UnityEngine_Transform__set_localScale_40932d0
                                            (*(undefined4 *)(lVar10 + 0xc),
                                             *(undefined4 *)(lVar10 + 0x10),
                                             *(undefined4 *)(lVar10 + 0x14),lVar2,0);
                                  puVar1 = PTR_DAT_057ad300;
                                  lVar2 = *(long *)(param_1 + 0x50);
                                  if (lVar2 != 0) {
                                    iVar9 = 1;
                                    while (iVar9 + -1 < *(int *)(lVar2 + 0x18)) {
                                      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                        (lVar2,iVar9 + -1,*(undefined8 *)puVar1);
                                      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0))
                                      goto LAB_02857984;
                                      UnityEngine_GameObject__SetActive_408e318
                                                (*(long *)(lVar2 + 0x10),param_4 == iVar9,0);
                                      lVar2 = *(long *)(param_1 + 0x50);
                                      iVar9 = iVar9 + 1;
                                      if (lVar2 == 0) goto LAB_02857984;
                                    }
                                    Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetParticle_2759e34
                                              (param_1,param_5,param_4);
                                    Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetRemainingDuckCount_2759444
                                              (param_1,param_6);
                                    if (*(long *)(param_1 + 0x28) != 0) {
                                      lVar2 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig__GetDuckHouseConfigBySize_2756640
                                                        (*(long *)(param_1 + 0x28),param_4 + -1);
                                      if (((*(long *)(param_1 + 0x70) != 0) &&
                                          (lVar10 = UnityEngine_GameObject__get_transform_408e25c
                                                              (*(long *)(param_1 + 0x70),0),
                                          lVar2 != 0)) && (lVar10 != 0)) {
                                        UnityEngine_Transform__set_localScale_40932d0
                                                  (*(undefined4 *)(lVar2 + 0x2c),
                                                   *(undefined4 *)(lVar2 + 0x30),
                                                   *(undefined4 *)(lVar2 + 0x34),lVar10,0);
                                        if ((*(long *)(param_1 + 0x60) != 0) &&
                                           (lVar10 = UnityEngine_GameObject__get_transform_408e25c
                                                               (*(long *)(param_1 + 0x60),0),
                                           lVar10 != 0)) {
                                          UnityEngine_Transform__set_localScale_40932d0
                                                    (*(undefined4 *)(lVar2 + 0x38),
                                                     *(undefined4 *)(lVar2 + 0x3c),
                                                     *(undefined4 *)(lVar2 + 0x40),lVar10,0);
                                          if ((*(long *)(param_1 + 0x60) != 0) &&
                                             (lVar10 = UnityEngine_GameObject__get_transform_408e25c
                                                                 (*(long *)(param_1 + 0x60),0),
                                             lVar10 != 0)) {
                                            UnityEngine_Transform__set_localPosition_4092ce0
                                                      (*(undefined4 *)(lVar2 + 0x44),
                                                       *(undefined4 *)(lVar2 + 0x48),
                                                       *(undefined4 *)(lVar2 + 0x4c),lVar10,0);
                                            if (*(long *)(param_1 + 0xb0) != 0) {
                                              UnityEngine_Animator__Play_1f79b70
                                                        (*(long *)(param_1 + 0xb0),
                                                         *(undefined4 *)(param_1 + 200),0);
                                              if (*(long *)(param_1 + 0xb0) != 0) {
                                                UnityEngine_Behaviour__set_enabled_408d778
                                                          (*(long *)(param_1 + 0xb0),0,0);
                                                if (*(long *)(param_1 + 0xa0) != 0) {
                                                  Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView__SetDuckType_2756bf0
                                                            ();
                                                  if (*(long *)(param_1 + 0x20) != 0) {
                                                    uVar6 = 
                                                  Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckCoverConfig_2756a10
                                                            (*(long *)(param_1 + 0x20),param_5,
                                                             &stack0xffffffffffffffc0);
                                                  if ((uVar6 & 1) == 0) {
                                                    return;
                                                  }
                                                  if (*(long *)(param_1 + 0x78) != 0) {
                                                    UnityEngine_SpriteRenderer__set_sprite_4095b64
                                                              (*(long *)(param_1 + 0x78),0,0);
                                                    lVar2 = *(long *)(param_1 + 0x80);
                                                    if (lVar2 != 0) {
                                                      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_02859f98:
                    /* WARNING: Subroutine does not return */
                                                        FUN_012d0ef8();
                                                      }
                                                      if (*(long *)(lVar2 + 0x20) != 0) {
                                                                                                                
                                                  UnityEngine_SpriteRenderer__set_sprite_4095b64
                                                            (*(long *)(lVar2 + 0x20),0,0);
                                                  lVar2 = *(long *)(param_1 + 0x80);
                                                  if (lVar2 != 0) {
                                                    if (*(uint *)(lVar2 + 0x18) < 2)
                                                    goto LAB_02859f98;
                                                    if (*(long *)(lVar2 + 0x28) != 0) {
                                                      UnityEngine_SpriteRenderer__set_sprite_4095b64
                                                                (*(long *)(lVar2 + 0x28),0,0);
                                                      if (*(long *)(param_1 + 0x88) != 0) {
                                                                                                                
                                                  UnityEngine_SpriteRenderer__set_sprite_4095b64
                                                            (*(long *)(param_1 + 0x88),0,0);
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

