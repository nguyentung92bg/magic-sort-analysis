/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.ColorPaletteNS.ColorPaletteController$$Awake
void Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteController__Awake (Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.ColorPaletteNS.ColorPaletteController$$Awake
   void Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteController__Awake
   (Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteController_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteController__Awake_37a06a4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000005c33dde & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ce668);
    FUN_012d0dc8(PTR_DAT_0579ba68);
    FUN_012d0dc8(PTR_DAT_057f3778);
    FUN_012d0dc8(PTR_DAT_057723b0);
    FUN_012d0dc8(PTR_DAT_057b0ae0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c33dde = 1;
  }
  puVar4 = PTR_DAT_057ce668;
  puVar3 = PTR_DAT_057b0ae0;
  puVar2 = PTR_DAT_0579ba68;
  puVar1 = PTR_DAT_0576c200;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_98,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057723b0);
    puVar5 = PTR_DAT_05805c10;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    lStack_70 = lStack_88;
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_80,*(undefined8 *)puVar2), lVar6 = lStack_70, (uVar7 & 1) != 0
          ) {
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar8 = UnityEngine_Object__Instantiate_object__2aac7c0(uVar11,*(undefined8 *)puVar3);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar9 = UnityEngine_Component__get_transform_408b444(lVar8,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_Transform__SetParent_409352c(lVar9,*(undefined8 *)(param_1 + 0x40),0);
      lVar9 = UnityEngine_Component__get_transform_408b444(lVar8,0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(puVar5);
        cRam0000000005c230aa = '\x01';
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      puVar10 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
      UnityEngine_Transform__set_localPosition_4092ce0(*puVar10,puVar10[1],puVar10[2],lVar9,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteView__SetColor_37a0910
                (lVar8,*(undefined8 *)(lVar6 + 0x18));
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)puVar4);
  }
  return;
}

