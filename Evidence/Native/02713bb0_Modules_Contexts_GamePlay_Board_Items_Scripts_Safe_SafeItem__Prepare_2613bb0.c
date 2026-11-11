/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t remainingBottleCompletions, int32_t safeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t
   remainingBottleCompletions, int32_t safeType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__Prepare_2613bb0
               (undefined8 param_1,undefined8 param_2,float param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,long param_8,undefined4 param_9,
               undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  
  lStack_80 = param_2;
  uStack_70 = param_1;
  if ((bRam0000000005c2ba20 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814978);
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c2ba20 = 1;
  }
  *(undefined8 *)(param_4 + 0x50) = param_7;
  *(undefined4 *)(param_4 + 0x60) = param_9;
  *(undefined4 *)(param_4 + 100) = param_10;
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
      uVar17 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x3c);
      fVar18 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x44);
      fVar16 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetDistanceBetweenBottles_22fade0
                                (0);
      fVar16 = fVar16 * (float)(iVar1 + -1) * 0.5;
      *(ulong *)(param_4 + 0x34) =
           CONCAT44((float)lStack_80 + (float)((ulong)uVar17 >> 0x20) * fVar16,
                    (float)uStack_70 + (float)uVar17 * fVar16);
      *(float *)(param_4 + 0x3c) = param_3 + fVar18 * fVar16;
      if ((param_8 != 0) && (lVar7 = *(long *)(param_4 + 0x48), lVar7 != 0)) {
        uVar2 = *(undefined4 *)(param_4 + 0x60);
        iVar1 = *(int *)(param_8 + 0x18);
        if ((bRam0000000005c2ba29 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057936b8);
          FUN_012d0dc8(PTR_DAT_057fbae0);
          FUN_012d0dc8(PTR_DAT_05795d58);
          FUN_012d0dc8(PTR_DAT_0575a2d8);
          FUN_012d0dc8(PTR_DAT_0579f3e8);
          FUN_012d0dc8(PTR_DAT_057d4408);
          FUN_012d0dc8(PTR_DAT_057a3198);
          bRam0000000005c2ba29 = 1;
        }
        uStack_88 = 0;
        lStack_80 = 0;
        uStack_90 = 0;
        lVar15 = *(long *)(lVar7 + 0x30);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        puVar6 = PTR_DAT_05805c10;
        if (lVar15 != 0) {
          lVar10 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
          UnityEngine_Transform__set_localScale_40932d0
                    (*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 0x10),
                     *(undefined4 *)(lVar10 + 0x14),lVar15,0);
          lVar15 = *(long *)(lVar7 + 0x30);
          if (cRam0000000005c230aa == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230aa = '\x01';
          }
          pfVar11 = *(float **)(*(long *)puVar6 + 0xb8);
          UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                    (*pfVar11 * _UNK_04339bec,pfVar11[1] * _UNK_04339bec,pfVar11[2] * _UNK_04339bec,
                     0);
          if (lVar15 != 0) {
            UnityEngine_Transform__set_localRotation_4092f3c(lVar15,0);
            if (*(long *)(lVar7 + 0x30) != 0) {
              UnityEngine_Transform__set_localPosition_4092ce0
                        (0,0xc0300000,0,*(long *)(lVar7 + 0x30),0);
              puVar5 = PTR_DAT_057fbae0;
              puVar4 = PTR_DAT_057a3198;
              puVar3 = PTR_DAT_057936b8;
              if (*(long *)(lVar7 + 0xb0) != 0) {
                System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                          (&uStack_a8,*(long *)(lVar7 + 0xb0),*(undefined8 *)PTR_DAT_0579f3e8);
                uStack_88 = uStack_a0;
                uStack_90 = uStack_a8;
                lStack_80 = lStack_98;
                while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                         (&uStack_90,*(undefined8 *)puVar5), lVar15 = lStack_80,
                      (uVar8 & 1) != 0) {
                  if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  UnityEngine_SpriteRenderer__get_color_4095d44(lStack_80,0);
                  UnityEngine_SpriteRenderer__set_color_4095de0(lVar15,0);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_90,*(undefined8 *)puVar3);
                if ((*(long *)(lVar7 + 0x48) != 0) &&
                   (lVar15 = UnityEngine_Component__get_gameObject_408b480
                                       (*(long *)(lVar7 + 0x48),0), lVar15 != 0)) {
                  UnityEngine_GameObject__SetActive_408e318(lVar15,1,0);
                  if ((*(long *)(lVar7 + 0x50) != 0) &&
                     (lVar15 = UnityEngine_Component__get_gameObject_408b480
                                         (*(long *)(lVar7 + 0x50),0), lVar15 != 0)) {
                    UnityEngine_GameObject__SetActive_408e318(lVar15,iVar1 == 1,0);
                    if ((*(long *)(lVar7 + 0x58) != 0) &&
                       (lVar15 = UnityEngine_Component__get_gameObject_408b480
                                           (*(long *)(lVar7 + 0x58),0), lVar15 != 0)) {
                      iVar1 = iVar1 + -1;
                      UnityEngine_GameObject__SetActive_408e318(lVar15,iVar1 != 0,0);
                      Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__SetSorting_2615408
                                (lVar7,param_5,param_6);
                      plVar14 = *(long **)(lVar7 + 0x18);
                      if (plVar14 != (long *)0x0) {
                        lVar15 = *plVar14;
                        uVar8 = (ulong)*(ushort *)(lVar15 + 0x12a);
                        if (uVar8 != 0) {
                          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0575a2d8) {
                              puVar9 = (undefined8 *)
                                       (lVar15 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
                              goto LAB_02713fec;
                            }
                            uVar8 = uVar8 - 1;
                            piVar12 = piVar12 + 4;
                          } while (uVar8 != 0);
                        }
                        puVar9 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_02713fec:
                        lVar15 = (*(code *)*puVar9)(plVar14,puVar9[1]);
                        if (cRam0000000005c230a9 == '\0') {
                          FUN_012d0dc8(PTR_DAT_05805c10);
                          cRam0000000005c230a9 = '\x01';
                        }
                        if (lVar15 != 0) {
                          lVar10 = *(long *)(*(long *)puVar6 + 0xb8);
                          UnityEngine_Transform__set_localScale_40932d0
                                    (*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 0x10),
                                     *(undefined4 *)(lVar10 + 0x14),lVar15,0);
                          lVar15 = *(long *)(lVar7 + 0x40);
                          if (lVar15 != 0) {
                            iVar13 = 0;
                            while (iVar13 < *(int *)(lVar15 + 0x18)) {
                              lVar15 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                 (lVar15,iVar13,*(undefined8 *)puVar4);
                              if ((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0))
                              goto LAB_02714084;
                              UnityEngine_GameObject__SetActive_408e318
                                        (*(long *)(lVar15 + 0x10),iVar1 == iVar13,0);
                              lVar15 = *(long *)(lVar7 + 0x40);
                              iVar13 = iVar13 + 1;
                              if (lVar15 == 0) goto LAB_02714084;
                            }
                            *(undefined4 *)(lVar7 + 0xbc) = uVar2;
                            Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__UpdateLockCountText_2616144
                                      (lVar7);
                            if ((*(long *)(lVar7 + 0x20) != 0) &&
                               (lVar15 = Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig__GetSafeConfigsForSize_26138c4
                                                   (*(long *)(lVar7 + 0x20),iVar1), lVar15 != 0)) {
                              lVar7 = *(long *)(lVar7 + 0xa8);
                              fVar16 = *(float *)(lVar15 + 0x20);
                              if (cRam0000000005c230a9 == '\0') {
                                FUN_012d0dc8(PTR_DAT_05805c10);
                                cRam0000000005c230a9 = '\x01';
                              }
                              if (lVar7 != 0) {
                                lVar15 = *(long *)(*(long *)puVar6 + 0xb8);
                                UnityEngine_Transform__set_localScale_40932d0
                                          (fVar16 * *(float *)(lVar15 + 0xc),
                                           fVar16 * *(float *)(lVar15 + 0x10),
                                           fVar16 * *(float *)(lVar15 + 0x14),lVar7,0);
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
LAB_02714084:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

