/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$InstantiateTokenModel
UnityEngine_GameObject_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__InstantiateTokenModel (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, System_String_o* tokenId, UnityEngine_Vector3_o positionOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$InstantiateTokenModel
   UnityEngine_GameObject_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__InstantiateTokenModel
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, System_String_o*
   tokenId, UnityEngine_Vector3_o positionOffset, const MethodInfo* method); */

long Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__InstantiateTokenModel_13850d0
               (float param_1,float param_2,float param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = PTR_DAT_057e8ff8;
  fVar11 = param_2;
  fVar12 = param_3;
  if ((bRam0000000005c23046 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578aaf0);
    FUN_012d0dc8(PTR_DAT_057dfb38);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05799138);
    FUN_012d0dc8(PTR_DAT_057a6780);
    FUN_012d0dc8(PTR_DAT_057e8ff8);
    bRam0000000005c23046 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0576c200;
  uVar8 = 0;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_5;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x10),param_5);
    uVar8 = *(undefined8 *)(param_4 + 0x98);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar8,0,0);
    uVar8 = 0;
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_4 + 0x98) != 0) {
      lVar9 = *(long *)(*(long *)(param_4 + 0x98) + 0x38);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05799138);
      uVar8 = 0;
      if ((lVar5 != 0) &&
         (uVar8 = System_Predicate_object____ctor_30fcf30
                            (lVar5,lVar3,*(undefined8 *)PTR_DAT_057a6780,0), lVar9 != 0)) {
        lVar3 = System_Collections_Generic_List_object___Find_21fd130
                          (lVar9,lVar5,*(undefined8 *)PTR_DAT_0578aaf0);
        puVar2 = PTR_DAT_057dfb38;
        if (lVar3 == 0) {
          return 0;
        }
        uVar8 = 0;
        if (*(long *)(param_4 + 0x58) != 0) {
          UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(param_4 + 0x58),0,0);
          uVar7 = *(undefined8 *)(lVar3 + 0x20);
          uVar8 = UnityEngine_Component__get_transform_408b444(param_4,0);
          lVar3 = *(long *)puVar1;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c(lVar3);
          }
          lVar3 = UnityEngine_Object__Instantiate_object__2aac8f8(uVar7,uVar8,*(undefined8 *)puVar2)
          ;
          plVar6 = (long *)(param_4 + 0xa0);
          *plVar6 = lVar3;
          FUN_012d0d74(plVar6,lVar3);
          uVar8 = 0;
          if (*plVar6 != 0) {
            lVar3 = UnityEngine_GameObject__get_transform_408e25c(*plVar6,0);
            uVar8 = 0;
            if (lVar3 != 0) {
              fVar10 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar3,0);
              UnityEngine_Transform__set_localPosition_4092ce0
                        (param_1 + fVar10,param_2 + fVar11,param_3 + fVar12,lVar3,0);
              return *plVar6;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(uVar8);
}

