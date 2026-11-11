/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBounds
UnityEngine_Bounds_o Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBounds (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBounds
   UnityEngine_Bounds_o Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBounds
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBounds_2f68c3c
               (undefined8 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000005c30921 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c30921 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  lVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottomLeftBottle_2f6b358
                    (param_5);
  if (lVar3 != 0) {
    uStack_70 = *(undefined8 *)(lVar3 + 0x78);
    uStack_78 = *(undefined8 *)(lVar3 + 0x70);
    uStack_80 = *(undefined8 *)(lVar3 + 0x68);
    uVar7 = UnityEngine_Bounds__get_center_38374e8(&uStack_80,0);
    uVar9 = param_3;
    uVar10 = param_4;
    uVar8 = UnityEngine_Bounds__get_size_3837648(&uStack_80,0);
    UnityEngine_Bounds___ctor_38373f8(uVar7,param_3,param_4,uVar8,uVar9,uVar10,&uStack_98,0);
    puVar2 = PTR_DAT_057b43e8;
    puVar1 = PTR_DAT_057b0e08;
    lVar3 = *(long *)(param_5 + 0x18);
    if (lVar3 != 0) {
      iVar5 = 0;
      do {
        if (*(int *)(lVar3 + 0x18) <= iVar5) {
          param_1[2] = uStack_88;
          param_1[1] = uStack_90;
          *param_1 = uStack_98;
          return;
        }
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar3,iVar5,*(undefined8 *)puVar1);
        if (lVar3 == 0) break;
        if (0 < *(int *)(lVar3 + 0x18)) {
          iVar6 = 0;
          do {
            lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar3,iVar6,*(undefined8 *)puVar2);
            if (lVar4 == 0) goto LAB_03068db0;
            uStack_a0 = *(undefined8 *)(lVar4 + 0x78);
            uStack_a8 = *(undefined8 *)(lVar4 + 0x70);
            uStack_b0 = *(undefined8 *)(lVar4 + 0x68);
            UnityEngine_Bounds__Encapsulate_383783c(&uStack_98,&uStack_b0,0);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(lVar3 + 0x18));
        }
        lVar3 = *(long *)(param_5 + 0x18);
        iVar5 = iVar5 + 1;
      } while (lVar3 != 0);
    }
  }
LAB_03068db0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

