/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$SetProgress
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetProgress (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, int32_t currentProgress, int32_t maxProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0386196c) */
/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$SetProgress
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetProgress
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, int32_t
   currentProgress, int32_t maxProgress, const MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetProgress_3760bf0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,int param_5,
               int param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  ulong uVar22;
  
  Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__ClearExistingSeparators_37614f0
            ();
  if (*(long *)(param_4 + 0x18) != 0) {
    fVar13 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x20) != 0) {
      fVar18 = param_2;
      fVar21 = param_3;
      fVar14 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_4 + 0x20),0);
      if (cRam0000000005c25e4a == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c25e4a = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      fVar21 = (param_3 - fVar21) * (param_3 - fVar21);
      uVar22 = (ulong)(uint)fVar21;
      *(float *)(param_4 + 0x50) =
           SQRT(fVar21 + (fVar13 - fVar14) * (fVar13 - fVar14) +
                         (param_2 - fVar18) * (param_2 - fVar18));
      if (param_6 < 1) {
        return;
      }
      if (param_5 == param_6) {
        Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetCompletedText_3761688
                  ();
      }
      else {
        Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetInProgressText_3761718
                  (param_4);
      }
      uVar20 = (ulong)(uint)(float)param_6;
      Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__UpdateGreenBar_3761848
                ((float)param_5 / (float)param_6,param_4);
      if ((bRam0000000005c33bcd & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05809a08);
        FUN_012d0dc8(PTR_DAT_05769f00);
        FUN_012d0dc8(PTR_DAT_0576c200);
        bRam0000000005c33bcd = 1;
      }
      Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__ClearExistingSeparators_37614f0
                (param_4);
      puVar3 = PTR_DAT_05809a08;
      puVar2 = PTR_DAT_057f4aa8;
      if (0 < param_6) {
        iVar12 = 1;
        do {
          fVar18 = (float)uVar22;
          fVar13 = (float)uVar20;
          if (*(long *)(param_4 + 0x18) == 0) {
LAB_03861b00:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          fVar21 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_4 + 0x18),0);
          if (*(long *)(param_4 + 0x20) == 0) goto LAB_03861b00;
          fVar23 = (float)iVar12 / (float)param_6;
          fVar14 = fVar18;
          fVar19 = (float)param_6;
          fVar15 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(param_4 + 0x20),0);
          if (fVar23 < 0.0) {
            fVar23 = 0.0;
          }
          lVar5 = 0x38;
          if (iVar12 <= param_5) {
            lVar5 = 0x30;
          }
          uVar11 = *(undefined8 *)(param_4 + lVar5);
          if (cRam0000000005c25812 == '\0') {
            FUN_012d0dc8(puVar2);
            cRam0000000005c25812 = '\x01';
          }
          puVar7 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
          uVar20 = (ulong)(uint)(fVar13 + fVar23 * (fVar19 - fVar13));
          uVar22 = (ulong)(uint)(fVar18 + fVar23 * (fVar14 - fVar18));
          uVar16 = *puVar7;
          uVar25 = puVar7[3];
          uVar17 = puVar7[1];
          uVar24 = puVar7[2];
          uVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
          if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0576c200);
          }
          lVar5 = UnityEngine_Object__Instantiate_object__2aacb38
                            (fVar21 + fVar23 * (fVar15 - fVar21),uVar20,uVar22,uVar16,uVar17,uVar24,
                             uVar25,uVar11,uVar4,*(undefined8 *)PTR_DAT_05769f00);
          if ((lVar5 == 0) ||
             (lVar6 = UnityEngine_GameObject__get_gameObject_408e764(lVar5,0), lVar6 == 0))
          goto LAB_03861b00;
          UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
          lVar6 = *(long *)(param_4 + 0x58);
          if (lVar6 == 0) goto LAB_03861b00;
          lVar8 = *(long *)(lVar6 + 0x10);
          lVar10 = *(long *)puVar3;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_03861b00;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = lVar5;
            FUN_012d0d74(plVar9,lVar5);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar6,lVar5);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 <= param_6);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

