/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartPairs$$GenerateItemPart
Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartPairs__GenerateItemPart (int32_t itemPartType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartPairs$$GenerateItemPart
   Modules_Infrastructure_Common_Scripts_Component_AItemPart_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartPairs__GenerateItemPart (int32_t
   itemPartType, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartPairs__GenerateItemPart_23015ac
               (undefined4 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uStack_14;
  
  if ((bRam0000000005c2a616 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05806d78);
    FUN_012d0dc8(PTR_DAT_057a3e90);
    FUN_012d0dc8(PTR_DAT_057673a8);
    FUN_012d0dc8(PTR_DAT_05768790);
    bRam0000000005c2a616 = 1;
  }
  switch(param_1) {
  case 1:
    puVar5 = (undefined8 *)PTR_DAT_05768790;
    break;
  case 2:
    puVar5 = (undefined8 *)PTR_DAT_05806d78;
    break;
  case 3:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057a3e90);
    if (lVar1 != 0) {
      Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathItem___ctor_2f60c70
                (lVar1,0);
      return lVar1;
    }
    goto code_r0x02401714;
  case 4:
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057673a8);
    if (lVar1 != 0) {
      Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowItemPart___ctor_2f60b64
                (lVar1,0);
      return lVar1;
    }
    goto code_r0x02401714;
  default:
    uStack_14 = param_1;
    uVar2 = thunk_FUN_0136d790(PTR_DAT_05784a68);
    uVar2 = thunk_FUN_01320a8c(uVar2,&uStack_14);
    thunk_FUN_0136d790(PTR_DAT_057b2d58);
    uVar3 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar4 = thunk_FUN_0136d790(PTR_DAT_0578f918);
    System_ArgumentOutOfRangeException___ctor_21221d0(uVar3,uVar4,uVar2,0,0);
    uVar2 = thunk_FUN_0136d790(PTR_DAT_05764e18);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar3,uVar2);
  }
  lVar1 = thunk_FUN_01320e48(*puVar5);
  if (lVar1 != 0) {
    Modules_Infrastructure_Common_Scripts_Component_AItemPart___ctor_40ea9cc(lVar1,0);
    return lVar1;
  }
code_r0x02401714:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

