/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$SetIceSpriteTransformValuesForWidth
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetIceSpriteTransformValuesForWidth (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this, int32_t width, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$SetIceSpriteTransformValuesForWidth
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetIceSpriteTransformValuesForWidth
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this, int32_t width, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetIceSpriteTransformValuesForWidth_274f288
               (long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    uVar4 = 0;
    uVar5 = (ulong)(param_2 - 2);
    do {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if ((long)(int)uVar1 <= (long)uVar4) {
        if (param_2 == 5) {
          if ((*(long *)(param_1 + 0x28) == 0) ||
             (lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0),
             lVar3 == 0)) break;
          UnityEngine_Transform__set_localPosition_4092ce0(_UNK_0438f360,0,0,lVar3,0);
          if (*(long *)(param_1 + 0x28) == 0) break;
          lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
        }
        else if (param_2 == 7) {
          if ((*(long *)(param_1 + 0x28) == 0) ||
             (lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0),
             lVar3 == 0)) break;
          UnityEngine_Transform__set_localPosition_4092ce0(_UNK_0438f358,0,0,lVar3,0);
          if (*(long *)(param_1 + 0x28) == 0) break;
          lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
        }
        else if (param_2 == 6) {
          if ((*(long *)(param_1 + 0x28) == 0) ||
             (lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0),
             lVar3 == 0)) break;
          UnityEngine_Transform__set_localPosition_4092ce0(_UNK_0438f368,0,0,lVar3,0);
          if (*(long *)(param_1 + 0x28) == 0) break;
          lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
        }
        else {
          if ((*(long *)(param_1 + 0x28) == 0) ||
             (lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0),
             lVar3 == 0)) break;
          UnityEngine_Transform__set_localPosition_4092ce0(0,0,0,lVar3,0);
          if (*(long *)(param_1 + 0x28) == 0) break;
          lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
        }
        if (lVar3 != 0) {
          if (pcRam0000000005c3a650 == (code *)0x0) {
            pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
          }
          (*pcRam0000000005c3a650)(lVar3,&stack0xffffffffffffffd0);
          return;
        }
        break;
      }
      if ((uVar5 == uVar4) && (*(char *)(param_1 + 0x68) != '\0')) {
        if (uVar1 <= uVar5) {
LAB_0284f474:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar3 = *(long *)(lVar3 + uVar5 * 8 + 0x20);
        if (lVar3 == 0) break;
        uVar2 = 1;
      }
      else {
        if (uVar1 <= uVar4) goto LAB_0284f474;
        lVar3 = *(long *)(lVar3 + uVar4 * 8 + 0x20);
        if (lVar3 == 0) break;
        uVar2 = 0;
      }
      UnityEngine_GameObject__SetActive_408e318(lVar3,uVar2,0);
      lVar3 = *(long *)(param_1 + 0x38);
      uVar4 = uVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

