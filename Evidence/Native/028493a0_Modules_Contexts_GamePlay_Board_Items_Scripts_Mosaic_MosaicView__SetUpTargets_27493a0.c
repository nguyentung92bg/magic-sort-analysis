/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$SetUpTargets
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__SetUpTargets (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, System_Collections_Generic_List_ColorId__o* requiredColors, int32_t bottlesCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$SetUpTargets
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__SetUpTargets
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this,
   System_Collections_Generic_List_ColorId__o* requiredColors, int32_t bottlesCount, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__SetUpTargets_27493a0
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               long param_5,int param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  
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
  puVar8 = PTR_DAT_057d60c8;
  puVar7 = PTR_DAT_057d5610;
  puVar6 = PTR_DAT_057c0730;
  puVar5 = PTR_DAT_057bffe0;
  puVar4 = PTR_DAT_057bb3b8;
  puVar3 = PTR_DAT_057998d8;
  puVar2 = PTR_DAT_0576aae0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  if ((param_5 != 0) && (*(long *)(param_4 + 0x50) != 0)) {
    iVar16 = *(int *)(param_5 + 0x18);
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_d8,*(long *)(param_4 + 0x50),*(undefined8 *)PTR_DAT_05778a58);
    uStack_98 = uStack_d0;
    uStack_a0 = uStack_d8;
    uStack_90 = uStack_c8;
    do {
      uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_a0,*(undefined8 *)puVar6);
      if ((uVar9 & 1) == 0) {
        uVar9 = 0;
        break;
      }
      if (uStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    } while ((*(int *)(uStack_90 + 0x14) != iVar16) ||
            (uVar9 = uStack_90, *(int *)(uStack_90 + 0x10) != param_6));
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_a0,*(undefined8 *)PTR_DAT_057c0540);
    lVar13 = *(long *)(param_4 + 0x70);
    if (lVar13 != 0) {
      iVar16 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (0 < iVar16) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar13 + 0x10),0,iVar16,0);
      }
      lVar13 = *(long *)(param_4 + 0x58);
      if (lVar13 != 0) {
        iVar16 = 0;
        do {
          if (*(int *)(lVar13 + 0x18) <= iVar16) {
            System_Collections_Generic_List_Int32Enum___GetEnumerator_2052720
                      (&uStack_d8,param_5,*(undefined8 *)PTR_DAT_057f6050);
            iVar16 = 0;
            uStack_b8 = uStack_d0;
            uStack_c0 = uStack_d8;
            uStack_b0 = uStack_c8;
            goto LAB_0284973c;
          }
          lVar13 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar13,iVar16,*(undefined8 *)puVar3);
          if (uVar9 == 0) {
LAB_028496c4:
            if ((lVar13 == 0) ||
               (lVar13 = UnityEngine_Component__get_gameObject_408b480(lVar13,0), lVar13 == 0))
            break;
            UnityEngine_GameObject__SetActive_408e318(lVar13,0,0);
          }
          else {
            lVar10 = *(long *)(uVar9 + 0x18);
            if (lVar10 == 0) break;
            if (*(int *)(lVar10 + 0x18) <= iVar16) goto LAB_028496c4;
            lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar10,iVar16,*(undefined8 *)puVar5);
            if (((lVar13 == 0) ||
                (lVar11 = UnityEngine_Component__get_transform_408b444(lVar13,0), lVar11 == 0)) ||
               (UnityEngine_Transform__get_localPosition_4092c40(lVar11,0), lVar10 == 0)) break;
            uVar18 = *(undefined4 *)(lVar10 + 0x10);
            lVar11 = UnityEngine_Component__get_transform_408b444(lVar13,0);
            if (lVar11 == 0) break;
            UnityEngine_Transform__set_localPosition_4092ce0(uVar18,param_2,param_3,lVar11,0);
            *(undefined4 *)(lVar13 + 0x68) = *(undefined4 *)(lVar10 + 0x14);
            Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__SetUpTargetType_2748548
                      (lVar13);
            lVar10 = UnityEngine_Component__get_gameObject_408b480(lVar13,0);
            if (lVar10 == 0) break;
            UnityEngine_GameObject__SetActive_408e318(lVar10,1,0);
            lVar10 = *(long *)(param_4 + 0x70);
            if (lVar10 == 0) break;
            lVar11 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)puVar4;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 == 0) break;
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              plVar14 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar14 = lVar13;
              FUN_012d0d74(plVar14,lVar13);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar10,lVar13);
            }
          }
          lVar13 = *(long *)(param_4 + 0x58);
          iVar16 = iVar16 + 1;
        } while (lVar13 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
LAB_0284973c:
  uVar12 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext_3ea568c
                     (&uStack_c0,*(undefined8 *)puVar8);
  uVar9 = uStack_b0;
  if ((uVar12 & 1) == 0) {
LAB_028497e0:
    System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
              (&uStack_c0,*(undefined8 *)PTR_DAT_05817840);
    return;
  }
  if (*(long *)(param_4 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(int *)(*(long *)(param_4 + 0x70) + 0x18) <= iVar16) goto LAB_028497e0;
  if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar13 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar13,*(undefined8 *)puVar7);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                     (lVar13,uVar9 & 0xffffffff,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(param_4 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar18 = *(undefined4 *)(lVar13 + 0x50);
  uVar17 = *(undefined4 *)(lVar13 + 0x54);
  uVar19 = *(undefined4 *)(lVar13 + 0x58);
  uVar20 = *(undefined4 *)(lVar13 + 0x5c);
  lVar13 = System_Collections_Generic_List_object___get_Item_21fc76c
                     (*(long *)(param_4 + 0x70),iVar16,*(undefined8 *)puVar3);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__SetUpTargetView_27481d8
            (uVar18,uVar17,uVar19,uVar20,lVar13,uVar9 & 0xffffffff,iVar16);
  iVar16 = iVar16 + 1;
  goto LAB_0284973c;
}

