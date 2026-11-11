/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.ClickDetector$$OnPointerDown
void Modules_LevelEditor_WaterSort_UI_Scripts_ClickDetector__OnPointerDown (Modules_LevelEditor_WaterSort_UI_Scripts_ClickDetector_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.ClickDetector$$OnPointerDown
   void Modules_LevelEditor_WaterSort_UI_Scripts_ClickDetector__OnPointerDown
   (Modules_LevelEditor_WaterSort_UI_Scripts_ClickDetector_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

bool Modules_LevelEditor_WaterSort_UI_Scripts_ClickDetector__OnPointerDown_379cbd4
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  
  lVar8 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if ((bRam0000000005c33dba & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a4d70);
    FUN_012d0dc8(PTR_DAT_0575ffd0);
    FUN_012d0dc8(PTR_DAT_057eaa18);
    FUN_012d0dc8(PTR_DAT_057cb7b0);
    bRam0000000005c33dba = 1;
  }
  puVar2 = PTR_DAT_057a4d70;
  puVar1 = PTR_DAT_0575ffd0;
  if (lVar8 != 0) {
    uVar9 = UnityEngine_GameObject__get_gameObject_408e764(lVar8,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    uVar10 = UnityEngine_EventSystems_EventSystem__get_current_27931ec(0);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_057cb7b0;
    if (lVar8 != 0) {
      UnityEngine_EventSystems_BaseEventData___ctor_2791a60(lVar8,uVar10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (cRam0000000005c2c7f5 == '\0') {
        FUN_012d0dc8(PTR_DAT_057cb7b0);
        cRam0000000005c2c7f5 = '\x01';
      }
      puVar2 = PTR_DAT_057eaa18;
      lVar11 = *(long *)puVar1;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar11 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_0575b4b0;
      lVar12 = *(long *)puVar2;
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x80);
      if ((bRam0000000005c2aa38 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057b3f30);
        FUN_012d0dc8(PTR_DAT_0576b960);
        FUN_012d0dc8(PTR_DAT_0575b4b0);
        FUN_012d0dc8(PTR_DAT_057cb7b0);
        FUN_012d0dc8(PTR_DAT_0579cac8);
        FUN_012d0dc8(PTR_DAT_05814118);
        bRam0000000005c2aa38 = 1;
      }
      puVar3 = PTR_DAT_057cb7b0;
      puVar2 = PTR_DAT_057b3f30;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = UnityEngine_Pool_CollectionPool_object__object___Get_1aa7f98(*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar3);
      }
      (**(code **)(**(long **)(lVar12 + 0x38) + 8))(uVar9,lVar4);
      puVar2 = PTR_DAT_05814118;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      iVar15 = *(int *)(lVar4 + 0x18);
      if (0 < iVar15) {
        iVar13 = 0;
        do {
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar4,iVar13,*(undefined8 *)puVar2);
          lVar14 = *(long *)(*(long *)(lVar12 + 0x38) + 8);
          lVar6 = lVar5;
          if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
            lVar6 = FUN_0131942c(lVar14);
            lVar14 = lVar6;
          }
          if (lVar5 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = thunk_FUN_01320d5c(lVar5,lVar14);
            lVar6 = lVar7;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d1288(lVar5,lVar14);
            }
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0(lVar6,lVar7);
          }
          (**(code **)(*(long *)(*(long *)(lVar12 + 0x38) + 0x20) + 8))(lVar11,lVar7,lVar8);
          iVar13 = iVar13 + 1;
        } while (iVar15 != iVar13);
        iVar15 = *(int *)(lVar4 + 0x18);
      }
      puVar2 = PTR_DAT_0576b960;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      UnityEngine_Pool_CollectionPool_object__object___Release_1aa8150(lVar4,*(undefined8 *)puVar2);
      return 0 < iVar15;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

