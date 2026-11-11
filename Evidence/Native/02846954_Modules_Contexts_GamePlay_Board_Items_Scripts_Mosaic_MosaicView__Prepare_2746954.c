/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t bottlesCount, System_Collections_Generic_List_ColorId__o* requiredColors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t bottlesCount,
   System_Collections_Generic_List_ColorId__o* requiredColors, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Prepare_2746954
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long *plVar20;
  long lVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  
  if ((bRam0000000005c2c6b0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057bcd20);
    FUN_012d0dc8(PTR_DAT_057b3da8);
    FUN_012d0dc8(PTR_DAT_057e6e60);
    bRam0000000005c2c6b0 = 1;
  }
  lVar21 = *(long *)(param_1 + 0x30);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  puVar3 = PTR_DAT_05805c10;
  if (lVar21 != 0) {
    lVar15 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
               *(undefined4 *)(lVar15 + 0x14),lVar21,0);
    lVar21 = *(long *)(param_1 + 0x30);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    fVar2 = _UNK_04339bec;
    pfVar16 = *(float **)(*(long *)puVar3 + 0xb8);
    UnityEngine_Quaternion__Internal_FromEulerRad_3831834
              (*pfVar16 * _UNK_04339bec,pfVar16[1] * _UNK_04339bec,pfVar16[2] * _UNK_04339bec,0);
    if (lVar21 != 0) {
      UnityEngine_Transform__set_localRotation_4092f3c(lVar21,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        UnityEngine_Transform__set_localPosition_4092ce0(0,0xc0300000,0,*(long *)(param_1 + 0x30),0)
        ;
        lVar21 = *(long *)(param_1 + 0x40);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        if (lVar21 != 0) {
          lVar15 = *(long *)(*(long *)puVar3 + 0xb8);
          UnityEngine_Transform__set_localScale_40932d0
                    (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
                     *(undefined4 *)(lVar15 + 0x14),lVar21,0);
          lVar21 = *(long *)(param_1 + 0x40);
          if (cRam0000000005c230aa == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230aa = '\x01';
          }
          pfVar16 = *(float **)(*(long *)puVar3 + 0xb8);
          UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                    (*pfVar16 * fVar2,pfVar16[1] * fVar2,pfVar16[2] * fVar2,0);
          if (lVar21 != 0) {
            UnityEngine_Transform__set_localRotation_4092f3c(lVar21,0);
            if (*(long *)(param_1 + 0x40) != 0) {
              UnityEngine_Transform__set_localPosition_4092ce0
                        (0,_UNK_0438f354,0,*(long *)(param_1 + 0x40),0);
              Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__SetSorting_27475c8
                        (param_1,param_2,param_3);
              plVar20 = *(long **)(param_1 + 0x18);
              if (plVar20 != (long *)0x0) {
                lVar21 = *plVar20;
                uVar17 = (ulong)*(ushort *)(lVar21 + 0x12a);
                if (uVar17 != 0) {
                  piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0575a2d8) {
                      puVar10 = (undefined8 *)(lVar21 + (long)(*piVar19 + 0xb) * 0x10 + 0x138);
                      goto LAB_02846bb0;
                    }
                    uVar17 = uVar17 - 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 != 0);
                }
                puVar10 = (undefined8 *)FUN_0131971c(plVar20,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_02846bb0:
                lVar21 = (*(code *)*puVar10)(plVar20,puVar10[1]);
                if (cRam0000000005c230a9 == '\0') {
                  FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c230a9 = '\x01';
                }
                if (lVar21 != 0) {
                  lVar15 = *(long *)(*(long *)puVar3 + 0xb8);
                  uVar17 = (ulong)*(uint *)(lVar15 + 0x10);
                  uVar14 = (ulong)*(uint *)(lVar15 + 0x14);
                  UnityEngine_Transform__set_localScale_40932d0
                            (*(undefined4 *)(lVar15 + 0xc),uVar17,uVar14,lVar21,0);
                  puVar4 = PTR_DAT_057e6e60;
                  puVar3 = PTR_DAT_057b3da8;
                  lVar21 = *(long *)(param_1 + 0x48);
                  if (lVar21 != 0) {
                    iVar22 = 1;
                    do {
                      if (*(int *)(lVar21 + 0x18) <= iVar22 + -1) {
                        if ((bRam0000000005c2c6b1 & 1) == 0) {
                          FUN_012d0dc8(PTR_DAT_057d5610);
                          FUN_012d0dc8(PTR_DAT_0576aae0);
                          FUN_012d0dc8(PTR_DAT_057c0540);
                          FUN_012d0dc8(PTR_DAT_05817840);
                          FUN_012d0dc8(PTR_DAT_057d60c8);
                          FUN_012d0dc8(PTR_DAT_057c0730);
                          FUN_012d0dc8(PTR_DAT_05772e28);
                          FUN_012d0dc8(PTR_DAT_057d4150);
                          FUN_012d0dc8(PTR_DAT_057bb3b8);
                          FUN_012d0dc8(PTR_DAT_057aaec8);
                          FUN_012d0dc8(PTR_DAT_057f6050);
                          FUN_012d0dc8(PTR_DAT_05778a58);
                          FUN_012d0dc8(PTR_DAT_05765bc8);
                          FUN_012d0dc8(PTR_DAT_057f55a8);
                          FUN_012d0dc8(PTR_DAT_05760200);
                          FUN_012d0dc8(PTR_DAT_057998d8);
                          FUN_012d0dc8(PTR_DAT_057bffe0);
                          bRam0000000005c2c6b1 = 1;
                        }
                        puVar9 = PTR_DAT_057d60c8;
                        puVar8 = PTR_DAT_057d5610;
                        puVar7 = PTR_DAT_057c0730;
                        puVar6 = PTR_DAT_057bffe0;
                        puVar5 = PTR_DAT_057bb3b8;
                        puVar4 = PTR_DAT_057998d8;
                        puVar3 = PTR_DAT_0576aae0;
                        uStack_98 = 0;
                        uStack_90 = 0;
                        uStack_a0 = 0;
                        uStack_b8 = 0;
                        uStack_b0 = 0;
                        uStack_c0 = 0;
                        if ((param_5 == 0) || (*(long *)(param_1 + 0x50) == 0)) goto LAB_0284981c;
                        iVar22 = *(int *)(param_5 + 0x18);
                        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                                  (&uStack_d8,*(long *)(param_1 + 0x50),
                                   *(undefined8 *)PTR_DAT_05778a58);
                        uStack_98 = uStack_d0;
                        uStack_a0 = uStack_d8;
                        uStack_90 = uStack_c8;
                        goto LAB_02849530;
                      }
                      lVar21 = System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar21,iVar22 + -1,*(undefined8 *)puVar3);
                      if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) break;
                      UnityEngine_GameObject__SetActive_408e318
                                (*(long *)(lVar21 + 0x10),param_4 == iVar22,0);
                      if (*(long *)(lVar21 + 0x18) == 0) break;
                      UnityEngine_GameObject__SetActive_408e318
                                (*(long *)(lVar21 + 0x18),param_4 == iVar22,0);
                      if (param_4 == iVar22) {
                        if (((*(long *)(param_1 + 0x28) == 0) ||
                            (lVar21 = *(long *)(*(long *)(param_1 + 0x28) + 0x90), lVar21 == 0)) ||
                           (lVar21 = System_Collections_Generic_List_object___get_Item_21fc76c
                                               (lVar21,param_4 + -1,*(undefined8 *)puVar4),
                           lVar21 == 0)) break;
                        lVar15 = *(long *)(param_1 + 0x60);
                        uVar11 = UnityEngine_Object__get_name_4078cb0(lVar21,0);
                        if (lVar15 == 0) break;
                        UnityEngine_Animation__Play_1f7a100(lVar15,uVar11,0);
                      }
                      lVar21 = *(long *)(param_1 + 0x48);
                      iVar22 = iVar22 + 1;
                    } while (lVar21 != 0);
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
LAB_0284973c:
  uVar14 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext_3ea568c
                     (&uStack_c0,*(undefined8 *)puVar9);
  uVar17 = uStack_b0;
  if ((uVar14 & 1) == 0) {
LAB_028497e0:
    System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
              (&uStack_c0,*(undefined8 *)PTR_DAT_05817840);
    return;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(int *)(*(long *)(param_1 + 0x70) + 0x18) <= iVar22) goto LAB_028497e0;
  if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar21 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18);
  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar21 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar21,*(undefined8 *)puVar8);
  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar21 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                     (lVar21,uVar17 & 0xffffffff,0);
  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar24 = *(undefined4 *)(lVar21 + 0x50);
  uVar23 = *(undefined4 *)(lVar21 + 0x54);
  uVar25 = *(undefined4 *)(lVar21 + 0x58);
  uVar26 = *(undefined4 *)(lVar21 + 0x5c);
  lVar21 = System_Collections_Generic_List_object___get_Item_21fc76c
                     (*(long *)(param_1 + 0x70),iVar22,*(undefined8 *)puVar4);
  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__SetUpTargetView_27481d8
            (uVar24,uVar23,uVar25,uVar26,lVar21,uVar17 & 0xffffffff,iVar22);
  iVar22 = iVar22 + 1;
  goto LAB_0284973c;
  while( true ) {
    if (uStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if ((*(int *)(uStack_90 + 0x14) == iVar22) &&
       (uVar12 = uStack_90, *(int *)(uStack_90 + 0x10) == param_4)) break;
LAB_02849530:
    uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                       (&uStack_a0,*(undefined8 *)puVar7);
    if ((uVar12 & 1) == 0) {
      uVar12 = 0;
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_a0,*(undefined8 *)PTR_DAT_057c0540);
  lVar21 = *(long *)(param_1 + 0x70);
  if (lVar21 != 0) {
    iVar22 = *(int *)(lVar21 + 0x18);
    *(undefined4 *)(lVar21 + 0x18) = 0;
    *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
    if (0 < iVar22) {
      System_Array__Clear_26a6bec(*(undefined8 *)(lVar21 + 0x10),0,iVar22,0);
    }
    lVar21 = *(long *)(param_1 + 0x58);
    if (lVar21 != 0) {
      iVar22 = 0;
      do {
        if (*(int *)(lVar21 + 0x18) <= iVar22) {
          System_Collections_Generic_List_Int32Enum___GetEnumerator_2052720
                    (&uStack_d8,param_5,*(undefined8 *)PTR_DAT_057f6050);
          iVar22 = 0;
          uStack_b8 = uStack_d0;
          uStack_c0 = uStack_d8;
          uStack_b0 = uStack_c8;
          goto LAB_0284973c;
        }
        lVar21 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (lVar21,iVar22,*(undefined8 *)puVar4);
        if (uVar12 == 0) {
LAB_028496c4:
          if ((lVar21 == 0) ||
             (lVar21 = UnityEngine_Component__get_gameObject_408b480(lVar21,0), lVar21 == 0)) break;
          UnityEngine_GameObject__SetActive_408e318(lVar21,0,0);
        }
        else {
          lVar15 = *(long *)(uVar12 + 0x18);
          if (lVar15 == 0) break;
          if (*(int *)(lVar15 + 0x18) <= iVar22) goto LAB_028496c4;
          lVar15 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar15,iVar22,*(undefined8 *)puVar6);
          if (((lVar21 == 0) ||
              (lVar13 = UnityEngine_Component__get_transform_408b444(lVar21,0), lVar13 == 0)) ||
             (UnityEngine_Transform__get_localPosition_4092c40(lVar13,0), lVar15 == 0)) break;
          uVar24 = *(undefined4 *)(lVar15 + 0x10);
          lVar13 = UnityEngine_Component__get_transform_408b444(lVar21,0);
          if (lVar13 == 0) break;
          UnityEngine_Transform__set_localPosition_4092ce0(uVar24,uVar17,uVar14,lVar13,0);
          *(undefined4 *)(lVar21 + 0x68) = *(undefined4 *)(lVar15 + 0x14);
          Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__SetUpTargetType_2748548
                    (lVar21);
          lVar15 = UnityEngine_Component__get_gameObject_408b480(lVar21,0);
          if (lVar15 == 0) break;
          UnityEngine_GameObject__SetActive_408e318(lVar15,1,0);
          lVar15 = *(long *)(param_1 + 0x70);
          if (lVar15 == 0) break;
          lVar13 = *(long *)(lVar15 + 0x10);
          lVar18 = *(long *)puVar5;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar13 == 0) break;
          uVar1 = *(uint *)(lVar15 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
            plVar20 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
            *plVar20 = lVar21;
            FUN_012d0d74(plVar20,lVar21);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar15,lVar21);
          }
        }
        lVar21 = *(long *)(param_1 + 0x58);
        iVar22 = iVar22 + 1;
      } while (lVar21 != 0);
    }
  }
LAB_0284981c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

