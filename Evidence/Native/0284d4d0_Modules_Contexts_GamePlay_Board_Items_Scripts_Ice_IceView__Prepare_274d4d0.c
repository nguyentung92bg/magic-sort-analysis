/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t width, bool useShadow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t width, bool useShadow, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__Prepare_274d4d0
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((bRam0000000005c2c6e1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ad170);
    FUN_012d0dc8(PTR_DAT_0578c878);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    bRam0000000005c2c6e1 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x30);
  *(byte *)(param_1 + 0x68) = param_5 & 1;
  puVar4 = PTR_DAT_057d6f00;
  if (lVar9 != 0) {
    if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = *(int *)(lVar9 + 0x18) - 1;
    if (cRam0000000005c230ab == '\0') {
      FUN_012d0dc8(PTR_DAT_05800a28);
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c230ab = '\x01';
    }
    uVar3 = param_4 - 2;
    if ((int)uVar2 < 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      System_Math__ThrowMinMaxException_int__29c3384(0,uVar2,*(undefined8 *)PTR_DAT_05800a28);
    }
    lVar9 = *(long *)(param_1 + 0x30);
    if ((int)uVar3 <= (int)uVar2) {
      uVar2 = uVar3;
    }
    uVar1 = 0;
    if (-1 < (int)uVar3) {
      uVar1 = uVar2;
    }
    if (lVar9 != 0) {
      if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_SpriteRenderer__set_sprite_4095b64
                  (*(long *)(param_1 + 0x28),*(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20),0)
        ;
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar9 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0),
           lVar9 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar9,1,0);
          Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetSorting_274e49c
                    (param_1,param_2,param_3);
          puVar4 = PTR_DAT_0578c878;
          lVar9 = *(long *)(param_1 + 0x50);
          if (lVar9 != 0) {
            iVar6 = 0;
            do {
              if (*(int *)(lVar9 + 0x18) <= iVar6) {
                Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetLeftMaskXScale_274edb8
                          (0,param_1);
                Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetRightMaskXScale_274ec4c
                          (0,param_1);
                Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__ToggleLeftMask_274e694
                          (param_1,0);
                Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__ToggleRightMask_274e664
                          (param_1,0);
                lVar9 = *(long *)(param_1 + 0x38);
                if (lVar9 == 0) goto LAB_0284f310;
                uVar7 = 0;
                uVar8 = (ulong)(param_4 - 2);
                goto LAB_0284f2ac;
              }
              lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar9,iVar6,*(undefined8 *)puVar4);
              if (lVar9 == 0) break;
              UnityEngine_GameObject__SetActive_408e318(lVar9,iVar6 <= param_4 + -1,0);
              lVar9 = *(long *)(param_1 + 0x50);
              iVar6 = iVar6 + 1;
            } while (lVar9 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
LAB_0284f2ac:
  do {
    uVar2 = *(uint *)(lVar9 + 0x18);
    if ((long)(int)uVar2 <= (long)uVar7) {
      if (param_4 == 5) {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar9 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0),
           lVar9 == 0)) break;
        UnityEngine_Transform__set_localPosition_4092ce0(_UNK_0438f360,0,0,lVar9,0);
        if (*(long *)(param_1 + 0x28) == 0) break;
        lVar9 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
      }
      else if (param_4 == 7) {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar9 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0),
           lVar9 == 0)) break;
        UnityEngine_Transform__set_localPosition_4092ce0(_UNK_0438f358,0,0,lVar9,0);
        if (*(long *)(param_1 + 0x28) == 0) break;
        lVar9 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
      }
      else if (param_4 == 6) {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar9 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0),
           lVar9 == 0)) break;
        UnityEngine_Transform__set_localPosition_4092ce0(_UNK_0438f368,0,0,lVar9,0);
        if (*(long *)(param_1 + 0x28) == 0) break;
        lVar9 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
      }
      else {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar9 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0),
           lVar9 == 0)) break;
        UnityEngine_Transform__set_localPosition_4092ce0(0,0,0,lVar9,0);
        if (*(long *)(param_1 + 0x28) == 0) break;
        lVar9 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
      }
      if (lVar9 != 0) {
        if (pcRam0000000005c3a650 == (code *)0x0) {
          pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
        }
        (*pcRam0000000005c3a650)(lVar9,&stack0xffffffffffffffd0);
        return;
      }
      break;
    }
    if ((uVar8 == uVar7) && (*(char *)(param_1 + 0x68) != '\0')) {
      if (uVar2 <= uVar8) {
LAB_0284f474:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      lVar9 = *(long *)(lVar9 + uVar8 * 8 + 0x20);
      if (lVar9 == 0) break;
      uVar5 = 1;
    }
    else {
      if (uVar2 <= uVar7) goto LAB_0284f474;
      lVar9 = *(long *)(lVar9 + uVar7 * 8 + 0x20);
      if (lVar9 == 0) break;
      uVar5 = 0;
    }
    UnityEngine_GameObject__SetActive_408e318(lVar9,uVar5,0);
    lVar9 = *(long *)(param_1 + 0x38);
    uVar7 = uVar7 + 1;
  } while (lVar9 != 0);
LAB_0284f310:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

