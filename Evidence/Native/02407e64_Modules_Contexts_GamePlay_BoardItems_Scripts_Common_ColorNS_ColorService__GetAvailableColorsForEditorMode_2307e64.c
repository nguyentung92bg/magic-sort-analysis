/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ColorNS.ColorService$$GetAvailableColorsForEditorMode
System_Collections_Generic_List_ColorId__o* Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetAvailableColorsForEditorMode (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService_o* __this, System_Collections_Generic_List_ColorId__o* colorsInLevel, int32_t blackColorToDistributeToDifferentColor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ColorNS.ColorService$$GetAvailableColorsForEditorMode
   System_Collections_Generic_List_ColorId__o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetAvailableColorsForEditorMode
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService_o* __this,
   System_Collections_Generic_List_ColorId__o* colorsInLevel, int32_t
   blackColorToDistributeToDifferentColor, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetAvailableColorsForEditorMode_2307e64
               (long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar3 = PTR_DAT_05805bc0;
  if ((bRam0000000005c2a65b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ce668);
    FUN_012d0dc8(PTR_DAT_0579ba68);
    FUN_012d0dc8(PTR_DAT_057f3778);
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057ec5e8);
    FUN_012d0dc8(PTR_DAT_057723b0);
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    bRam0000000005c2a65b = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar8 == 0) {
LAB_02408100:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_Int32Enum____ctor_20512f0(lVar8,*(undefined8 *)PTR_DAT_057b99d0);
  puVar7 = PTR_DAT_05814878;
  puVar6 = PTR_DAT_057ec5e8;
  puVar5 = PTR_DAT_057ce668;
  puVar4 = PTR_DAT_0579ba68;
  puVar3 = PTR_DAT_057723b0;
  if (0 < param_3) {
    iVar12 = 0;
    do {
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar9 == 0)) goto LAB_02408100;
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_98,lVar9,*(undefined8 *)puVar3);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      lStack_70 = lStack_88;
      do {
        do {
          uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_80,*(undefined8 *)puVar4);
          lVar9 = lStack_70;
          if ((uVar10 & 1) == 0) goto LAB_02408044;
          if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(long *)(lStack_70 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar10 = System_Collections_Generic_List_Int32Enum___Contains_2051fc0
                             (param_2,*(undefined4 *)(*(long *)(lStack_70 + 0x18) + 0x70),
                              *(undefined8 *)puVar6);
        } while ((uVar10 & 1) != 0);
        lVar11 = *(long *)(lVar9 + 0x18);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar10 = System_Collections_Generic_List_Int32Enum___Contains_2051fc0
                           (lVar8,*(undefined4 *)(lVar11 + 0x70),*(undefined8 *)puVar6);
      } while ((uVar10 & 1) != 0);
      lVar9 = *(long *)(lVar9 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar1 = *(undefined4 *)(lVar9 + 0x70);
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar11 = *(long *)puVar7;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar2 = *(uint *)(lVar8 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(lVar8);
      }
LAB_02408044:
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)puVar5);
      iVar12 = iVar12 + 1;
    } while (iVar12 != param_3);
  }
  return lVar8;
}

