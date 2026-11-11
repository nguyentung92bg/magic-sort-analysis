/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$SetText
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__SetText (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this, System_String_o* toString, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorView$$SetText
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__SetText
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView_o* __this,
   System_String_o* toString, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorView__SetText_3dd9e5c
               (long param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  
                    /* try { // try from 03ed9e5c to 03fd9e5f has its CatchHandler @ 03eda1f8 */
  lVar11 = *(long *)(param_1 + 0x28);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c33d64 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_05778f00);
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c33d64 = 1;
  }
  uVar8 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lVar11 + 0x218),param_2,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_05774390;
  if (param_2 != 0) {
    lVar10 = param_2;
  }
  if (lVar10 != 0) {
    uVar9 = System_String__Replace_1ed29c0
                      (lVar10,*(undefined8 *)PTR_DAT_05778f00,
                       **(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8),0);
    *(undefined8 *)(lVar11 + 0x218) = uVar9;
    FUN_012d0d74((undefined8 *)(lVar11 + 0x218),uVar9);
    if (*(long *)(lVar11 + 0xf8) != 0) {
      UnityEngine_TouchScreenKeyboard__set_text_408b07c
                (*(long *)(lVar11 + 0xf8),*(undefined8 *)(lVar11 + 0x218),0);
    }
    if (*(long *)(lVar11 + 0x218) != 0) {
      iVar14 = *(int *)(*(long *)(lVar11 + 0x218) + 0x10);
      if (iVar14 < *(int *)(lVar11 + 0x22c)) {
        *(int *)(lVar11 + 0x230) = iVar14;
        *(int *)(lVar11 + 0x22c) = iVar14;
      }
      else if (iVar14 < *(int *)(lVar11 + 0x230)) {
        *(int *)(lVar11 + 0x230) = iVar14;
      }
      *(undefined1 *)(lVar11 + 0x2e3) = 1;
      *(undefined1 *)(lVar11 + 0x2a2) = 1;
      TMPro_TMP_InputField__UpdateLabel_3790e90(lVar11);
      if ((bRam0000000005c33d94 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057a7410);
        bRam0000000005c33d94 = 1;
      }
      lVar10 = *(long *)(lVar11 + 0x1d8);
      if (lVar10 == 0) {
        return;
      }
      lVar11 = *(long *)(lVar11 + 0x218);
      lVar12 = *(long *)PTR_DAT_057a7410;
      if ((bRam0000000005c320b2 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057858a0);
        FUN_012d0dc8(PTR_DAT_057d6c20);
        FUN_012d0dc8(PTR_DAT_05810948);
        FUN_012d0dc8(PTR_DAT_0580bde0);
        bRam0000000005c320b2 = 1;
      }
      if ((lVar10 != 0) &&
         (lVar6 = UnityEngine_Events_UnityEventBase__PrepareInvoke_3d57c08(lVar10,0),
         puVar5 = PTR_DAT_05810948, puVar4 = PTR_DAT_0580bde0, puVar3 = PTR_DAT_057858a0, lVar6 != 0
         )) {
        if (0 < *(int *)(lVar6 + 0x18)) {
          iVar14 = 0;
          puVar1 = (undefined8 *)(lVar10 + 0x28);
          do {
            plVar7 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar6,iVar14,*(undefined8 *)puVar5);
            lVar10 = *(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x18);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_0131942c(lVar10);
            }
            if (plVar7 == (long *)0x0) {
LAB_0344bc3c:
              plVar7 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar6,iVar14,*(undefined8 *)puVar5);
              if (plVar7 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)puVar3 + 300);
                if ((bVar2 <= *(byte *)(*plVar7 + 300)) &&
                   (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3))
                {
                  UnityEngine_Events_InvokableCall__Invoke_3d5623c(plVar7,0);
                  goto LAB_0344bd04;
                }
              }
              plVar7 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar6,iVar14,*(undefined8 *)puVar5);
              plVar15 = (long *)*puVar1;
              if (plVar15 == (long *)0x0) {
                uVar9 = FUN_012d0e38(*(undefined8 *)puVar4,1);
                *puVar1 = uVar9;
                FUN_012d0d74(puVar1,uVar9);
                plVar15 = (long *)*puVar1;
              }
              if (plVar15 == (long *)0x0) goto LAB_0344bd54;
              if ((lVar11 != 0) &&
                 (lVar10 = thunk_FUN_01320d5c(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0)
                 ) {
                uVar9 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
                FUN_012d0eb8(uVar9,0);
              }
              if ((int)plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef8();
              }
              plVar15[4] = lVar11;
              FUN_012d0d74(plVar15 + 4,lVar11);
              if (plVar7 == (long *)0x0) goto LAB_0344bd54;
              (**(code **)(*plVar7 + 0x178))(plVar7,*puVar1,*(undefined8 *)(*plVar7 + 0x180));
            }
            else {
              lVar13 = *plVar7;
              if ((*(byte *)(lVar13 + 300) < *(byte *)(lVar10 + 300)) ||
                 (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar10 + 300) * 8 + -8) !=
                  lVar10)) goto LAB_0344bc3c;
              (**(code **)(lVar13 + 0x198))(plVar7,lVar11,*(undefined8 *)(lVar13 + 0x1a0));
            }
LAB_0344bd04:
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)(lVar6 + 0x18));
        }
        return;
      }
LAB_0344bd54:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

